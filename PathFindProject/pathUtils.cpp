#include <path.hpp>
#include <map>

using namespace path;

Route::Route(uint size)
{
	m_size = size;
	dist = new int[size];
	via  = new int[size];
}
Route::~Route()
{
	delete via;
}
void Route::RouteBirth()
{
	uint random,counter = 0;
	map<int,bool> map;

	map[counter] = true;
	via[counter] = 0;
	++counter;
	while (counter < m_size)
	{
		random = rand() % m_size;
		if(map[random])
		{
			continue;
		}
		map[random] = true;
		via[counter] = random;
		++counter;
	}
}
void Route::Print()
{
	for (uint i = 0; i < m_size; i++) 
	{
		printf(" %d  " ,via [i]);
	}
	printf("\n");
}
void Route::operator=(Route& route)
{
	for (uint i = 0; i < m_size; i++) 
	{
		via[i]=route.via[i];
	}
	m_dist=route.m_dist;
}
void Route::InsertFitness(int**dist)
{
	m_dist=0;
	for (uint i = 0; i < m_size-1; i++)
	{
		m_dist +=dist[via[i]][via[i+1]];
	}
}
bool Step::IsBlack(BitMap* map)
{
	return map->IsBlack(this) ? true:false;
}
Step Step::operator+(int* idx)
{
	Step tmp;
	tmp(index);
	tmp.index[0]+=idx[0];
	tmp.index[1]+=idx[1];
	return tmp;
}
int Step::operator[](int n)
{
	if(n ==1||n == 0)
	{
		return index[n];
	}
	return 0;
}
void Step::add(int x,int y)
{
	index[0]+=y;

	index[1]+=x;
}
void Step::operator()(int* begin)
{
	index[0] = begin[0];
	index[1] = begin[1];
}
Step Step::Up()
{
	Step tmp;
	tmp.index[0] = index[0]+STEP;
	tmp.index[1] = index[1];
	return tmp;
}
Step Step::Down()
{
	Step Down;
	Down.index[0] = index[0]-STEP;
	Down.index[1] = index[1];
	return Down;
}
void Step::insert(int i,int j)
{
	index[0] = i;
	index[1] = j;
}
Step Step::Right()
{
	Step tmp;
	tmp.index[0] = index[0];
	tmp.index[1] = index[1]+STEP;
	return tmp;
}
bool Step::operator==(Step& s)
{
	if(s.index[0]==index[0] && s.index[1] == index[1])
	{
		return true;
	}
	return false;
}
bool Step::valid()
{
	if(index[0]>=0&&index[0]<SIZEH&&index[1]>=0&&index[1]<SIZEW)
	{
		return true;
	}
	return false;
}
bool OutOfBounds(int x,int y)
{
	double radius = x*x + y*y;
	return radius >= RAD ? true:false;
}
void Step::Print(BitMap* map)
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
				printf(" %d  %d %d",map->RetPix(tmpstep).m_data[BLUE],map->RetPix(tmpstep).m_data[GREEN],map->RetPix(tmpstep).m_data[RED]);
			}
		}
	}
}
void Step::Print()
{
	printf("%d  %d  ",index[0],index[1]);
}
bool Step::HASmember(Step& m)
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
Step Step::Left()
{
	Step Left;
	Left.index[0] = index[0];
	Left.index[1] = index[1]-STEP;
	return Left;
}
bool Pixel::IsBlack()
{
	return this->m_data[BLUE] == 0 && this->m_data[GREEN] == 0 && this->m_data[RED]==1 ? true:false;
}
bool Pixel::IsSideWalk()
{
	return this->m_data[BLUE] == 218 && this->m_data[GREEN] == 226 && this->m_data[RED]==226 ? true:false;
}
bool Pixel::IsDest()
{
	return this->m_data[BLUE] == 74 && this->m_data[GREEN] == 237 && this->m_data[RED]== 74 ? true:false;
}
bool Pixel::IsCorner()
{
	return this->m_data[BLUE] == 70 && this->m_data[GREEN] == 70 && this->m_data[RED]== 255 ? true:false;
}
bool Pixel::IsBegin()
{
	return this->m_data[BLUE] == 207 && this->m_data[GREEN] == 217 && this->m_data[RED]== 47 ? true:false;
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
void GradFunc(BitMap* map,BitMap* gradmap )
 {
	for (int i = 1; i < SIZEH-1; ++i)
	{
		for (int j = 1 ; j < SIZEW-1; ++j)
		{
	 		gradmap->RetIndex(i,j).m_pixel.m_data[BLUE]=8*map->RetIndex(i,j).m_pixel.m_data[BLUE] - map->RetIndex(i+1,j).m_pixel.m_data[BLUE] - map->RetIndex(i-1,j).m_pixel.m_data[BLUE] - map->RetIndex(i,j+1).m_pixel.m_data[BLUE] - map->RetIndex(i,j-1).m_pixel.m_data[BLUE]- map->RetIndex(i+1,j+1).m_pixel.m_data[BLUE]-map->RetIndex(i-1,j-1).m_pixel.m_data[BLUE];
			gradmap->RetIndex(i,j).m_pixel.m_data[GREEN]=8*map->RetIndex(i,j).m_pixel.m_data[GREEN] - map->RetIndex(i+1,j).m_pixel.m_data[GREEN] - map->RetIndex(i-1,j).m_pixel.m_data[GREEN] - map->RetIndex(i,j+1).m_pixel.m_data[GREEN] - map->RetIndex(i,j-1).m_pixel.m_data[GREEN] - map->RetIndex(i+1,j+1).m_pixel.m_data[GREEN]-map->RetIndex(i-1,j-1).m_pixel.m_data[GREEN];
			gradmap->RetIndex(i,j).m_pixel.m_data[RED]=8*map->RetIndex(i,j).m_pixel.m_data[RED] - map->RetIndex(i+1,j).m_pixel.m_data[RED] - map->RetIndex(i-1,j).m_pixel.m_data[RED] - map->RetIndex(i,j+1).m_pixel.m_data[RED] - map->RetIndex(i,j-1).m_pixel.m_data[RED]  - map->RetIndex(i+1,j+1).m_pixel.m_data[RED] - map->RetIndex(i-1,j-1).m_pixel.m_data[RED];
			if(gradmap->RetIndex(i,j).m_pixel.m_data[RED] > (gradmap->RetIndex(i,j).m_pixel.m_data[GREEN] + gradmap->RetIndex(i,j).m_pixel.m_data[BLUE]) || gradmap->RetIndex(i,j).m_pixel.m_data[GREEN] > (gradmap->RetIndex(i,j).m_pixel.m_data[RED] + gradmap->RetIndex(i,j).m_pixel.m_data[BLUE])|| gradmap->RetIndex(i,j).m_pixel.m_data[BLUE] > (gradmap->RetIndex(i,j).m_pixel.m_data[GREEN] + gradmap->RetIndex(i,j).m_pixel.m_data[RED]) ) 
			{
				gradmap->RetIndex(i,j).m_pixel.m_data[RED] =254;
				gradmap->RetIndex(i,j).m_pixel.m_data[GREEN] =254;
				gradmap->RetIndex(i,j).m_pixel.m_data[BLUE] =254;
			}
		}
	}
}
void ColorStepGreen(BitMap* imagemap,Step& step,int i)
{
	for	(int y = 0 ; y < i+SRAD; ++y)
	{
		for (int x = 0 ;x < i+SRAD; ++x)
		{
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[BLUE]=0;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[GREEN]=255;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[RED]=1;
		}
	}
}
void ColorStepDest(BitMap* imagemap,Step& step)
{
	for	(int y = -RAD -2 ; y <= RAD + 1; ++y)
	{
		for (int x = -RAD -2 ;x <= RAD +1; ++x)
		{
			if( !imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.IsSideWalk() )
			{
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[BLUE]=74;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[GREEN]=237;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[RED]=74;
			}
		}
	}
}
void ColorStepBegin(BitMap* imagemap,Step& step)
{
	for	(int y = 0 ; y < RAD; ++y)
	{
		for (int x = 0 ;x < RAD; ++x)
		{
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[BLUE]=207;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[GREEN]=217;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[RED]=47;
		}
	}
}
void ColorStepCorner(BitMap* imagemap,Step& step)
{
	for	(int y = -RAD - 4 ; y <= RAD +4; ++y)
	{
		for (int x = -RAD - 4 ;x <= RAD +4; ++x)
		{
			if( !imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.IsSideWalk() )
			{
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[BLUE]=70;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[GREEN]=70;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[RED]=255;
			}
		}
	}
}

void ColorStepRand(BitMap* imagemap,Step& step,int blue,int green,int red)
{
	for	(int y = 0 ; y < SRAD; ++y)
	{
		for (int x = 0 ;x < SRAD; ++x)
		{
			if(!OutOfBounds(x,y))
			{
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[BLUE]=blue;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[GREEN]=green;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[RED]=red;
			}
		}
	}
}
void ColorRand(BitMap* imagemap,Step& step,int blue,int green,int red)
{
	for	(int y = 0 ; y < RAD; ++y)
	{
		for (int x = 0 ;x < RAD; ++x)
		{
			{
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[BLUE]=blue;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[GREEN]=green;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[RED]=red;
			}
		}
	}
}
void ColorStepRed(BitMap* imagemap,Step& step)
{
	for	(int y = 0 ; y <= RAD; ++y)
	{
		for (int x = 0 ;x <= RAD; ++x)
		{
			if(!OutOfBounds(x,y))
			{
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[BLUE]=0;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[GREEN]=0;
				imagemap->RetIndex(step[0]+y,step[1]+x).m_pixel.m_data[RED]=0;
			}
		}
	}
}
bool Step::IsAvailable(BitMap* imagemap)
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
