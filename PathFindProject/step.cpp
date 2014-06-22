#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "utils.hpp"
using namespace std;
using namespace utils;
class Step
{
public:
	int index[2];
public:
	uint id;
	bool IsAvailable(BitMap* imagemap)
	{
		Step tmp,center;
		center(index);
		int tmpindex[2];
		for (tmpindex[0] = 0 ; tmpindex[0] < SRAD -4; ++tmpindex[0])
		{
			for (tmpindex[1] =  0 ;tmpindex[1] < SRAD -4; ++tmpindex[1])
			{
				tmp = center+tmpindex;
				if (tmp.valid() )
				{
					if( imagemap->RetPix(tmp).IsBlack() || imagemap->RetPix(tmp).IsSideWalk() )
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
		}
		return true;
	}
	bool IsBlack(BitMap* map)
	{
		return map->IsBlack(this) ? true:false;
	}
	Step operator+(int* idx)
	{
		Step tmp;
		tmp(index);
		tmp.index[0]+=idx[0];
		tmp.index[1]+=idx[1];
		return tmp;
	}
	int operator[](int n)
	{
		if(n ==1||n == 0)
		{
			return index[n];
		}
		return 0;
	}
	void add(int x,int y)
	{
		index[0]+=y;

		index[1]+=x;
	}
	void operator()(int* begin)
	{
		index[0] = begin[0];
		index[1] = begin[1];
	}
	Step Up()
	{
		Step tmp;
		tmp.index[0] = index[0]+STEP;
		tmp.index[1] = index[1];
		return tmp;
	}
	Step Down()
	{
		Step Down;
		Down.index[0] = index[0]-STEP;
		Down.index[1] = index[1];
		return Down;
	}
	void insert(int i,int j)
	{
		index[0] = i;
		index[1] = j;
	}
	Step Right()
	{
		Step tmp;
		tmp.index[0] = index[0];
		tmp.index[1] = index[1]+STEP;
		return tmp;
	}
	bool operator==(Step& s)
	{
		if(s.index[0]==index[0] && s.index[1] == index[1])
		{
			return true;
		}
		return false;
	}
	bool valid()
	{
		if(index[0]>=0&&index[0]<SIZEH&&index[1]>=0&&index[1]<SIZEW)
		{
			return true;
		}
		return false;
	}
	void Print(BitMap* map)
	{
		Step tmpstep,center;
		int tmp[DIM];

		center(index);
		for (tmp[0] = 0; tmp[0] <= SRAD; ++tmp[0])
		{
			for (tmp[1] = 0 ;tmp[1] <= SRAD; ++tmp[1])
			{
				tmpstep = center+tmp;
				if(!OutOfBounds(tmp[1],tmp[0]))
				{
					cout<<map->RetPix(tmpstep).m_data[BLUE]<<" "<<map->RetPix(tmpstep).m_data[GREEN]<<" "<<map->RetPix(tmpstep).m_data[RED]<<endl;
				}
			}
		}
	}
	void Print()
	{
		cout<<index[0]<<" "<<index[1]<<" ";
	}
	bool HASmember(Step& m)
	{
		Step tmpstep,check;
		int tmp[DIM];

		check(index);
		for (tmp[0] = -RAD-12; tmp[0] <= RAD+12; ++tmp[0])
		{
			for (tmp[1] =  -RAD-12 ;tmp[1] <= RAD+12; ++tmp[1])
			{
				tmpstep = check+tmp;
				if( m == tmpstep )
				{
					return true;
				}
			}
		}
		return false;
	}
	Step Left()
	{
		Step Left;
		Left.index[0] = index[0];
		Left.index[1] = index[1]-STEP;
		return Left;
	}
	bool ColorStepBlack(BitMap* imagemap,Step& step)
	{
		for (int y = 0; y <= SRAD; ++y)
		{
			for (int x =  0 ;x <= SRAD; ++x)
			{
				if(imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.IsCorner() || imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.IsDest())
				{
					return false;
				}
				if(!OutOfBounds(x,y))
				{
					imagemap->RetIndex(step[0]+y,step[1]+x).alive=true;
					imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[BLUE]=0;
					imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[GREEN]=0;
					imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[RED]=1;
				}
			}
		}
		return true;
	}
	void ColorStepBlue(BitMap* imagemap,Step& step)
	{
		for (int y = -RAD-4; y <= RAD+4; ++y)
		{
			for (int x = -RAD-4 ;x <= RAD+4; ++x)
			{
				if( !imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.IsSideWalk() )
				{
					imagemap->RetIndex(step[0]+y,step[1]+x).alive=true;
					imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[BLUE]=255;
					imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[GREEN]=0;
					imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[RED]=1;
				}
			}
		}
	}
};

