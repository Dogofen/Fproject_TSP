#include "path.hpp"
#include <graph.h>
#include <cmath>
#include <iostream>
uint StepNum(_Vector_ vector,Step& step)
{
	for (uint i = 0; i < vector.size(); ++i)
	{
		if(step == vector[i])
		{
			return i;
 		}
	}
	return -1;
}
int Distance(Step& src,Step& dest)
{
	return sqrt(pow(src[0]-dest[0],2)+pow(src[1]-dest[1],2))/OFSET;
}

bool IsCorner(Graph* graph,Step& src)
{
	for (uint i = 0; i < graph->m_vec->size(); ++i)
	{
		 if( graph->m_vec->operator[](i).HASmember(src))
		 {
			 return true;
		 }
	}
	return false;
}

void ConnectStep(Graph* graph,Step& step,Step& src)
{
	Step dest;
	for (uint i = 0; i < graph->m_vec->size(); ++i)
	{
		dest = graph->m_vec->operator[](i).HASmember(step) ? graph->m_vec->operator[](i) :dest;
	}
	if(!dest.valid()|| GraphIsAdjacent(graph,src.id,dest.id) )
	{
		return;
	}
	int dist = Distance(src,dest);
//	cout<<"the distance from:"<<src.id<<"  to:"<<dest.id<<"  is:"<<dist<<endl;
	GraphJoinWT(graph,src.id,dest.id,dist);
}
void GenerateGraph(BitMap* map,Step step,Graph* graph,Step& src)
{
	bool bl;

	if(!step.IsAvailable(map))
	{
		return;
	}
	if(step.IsBlack(map))
	{
		return;
	}
	bl = ColorStepBlack(map,step);
//	map->CreateImage("tmp1");
	if( !bl)
	{   
		return ConnectStep(graph,step,src);
	}
	GenerateGraph(map,step.Up(),graph,src);
	GenerateGraph(map,step.Right(),graph,src);
	GenerateGraph(map,step.Left(),graph,src);
	GenerateGraph(map,step.Down(),graph,src);
}
double Value(double num)
{
	return num *= num < 0 ? -1:1;
}
void PrintPath(BitMap* map,Step& src,Step& dest,int blue,int green,int red)
{
	double valx,x = dest[1] - src[1];
	double valy,y = dest[0] - src[0];

	int tmpx,tmpy,i =1,dist = OFSET*Distance(src,dest);
	valx = abs(x);
	valy = abs(y);
	Step router;
	x/= valx > valy ? valx:valy;
	y/= x==1 || x==-1 ? valx:valy;
	while( i < dist  )
	{
		tmpx= x*i;
		tmpy= y*i;
		router = src;
		router.add(tmpx,tmpy);
		ColorStepRand(map,router,blue,green,red);
		++i;
	}
}
void PrintRoute(BitMap* map,_Vector_& vec,int src,int dest,int** via)
{
	int num = via[src][dest];
	int blue = rand()% BYTENUM ;
	int green=rand()% BYTENUM ;
	int red=rand()% BYTENUM ;
	ColorRand(map,vec[dest],blue,green,red);
	while(num != src && num != -1 && num !=0)
	{	
		PrintPath(map,vec[num],vec[dest],blue,green,red);
		dest = num;
		num = via[src][dest];
	}
	PrintPath(map,vec[num],vec[dest],blue,green,red);
	cout<<endl;
} 
inline void IniVector(BitMap* map,_Vector_& vector)
{
	int i=0;

	vector.push_back(map->m_Dest[i]);
	while(map->m_Dest[i].id+1 == map->m_Dest[i+1].id)
	{
		vector.push_back(map->m_Dest[i+1]);
		++i;
	}
	map->TourSize=i+2;
	i=0;
	vector.push_back(map->m_corners[i]);
	while(map->m_corners[i].id+1 == map->m_corners[i+1].id)
	{
		vector.push_back(map->m_corners[i+1]);
		++i;
	}
}
void Generate(BitMap* map,BitMap* another)
{
	std::vector<Step> vector;
	BitMap tmp;
	Graph* graph;
	vector.push_back(map->m_begin);
	IniVector(map,vector);
	GradFunc(another,map);
	map->CreateImage("tmp");
	tmp.ReadBmp("tmp");
	for (size_t i = 0; i < vector.size(); ++i)
	{
		if(i==0)
		{
			ColorStepBegin(&tmp,vector[i]);
			continue;
		}
		if(i > 0 && i < map->TourSize)
		{
			ColorStepDest(&tmp,vector[i]);
			continue;
		}
		if(i >= map->TourSize)
		ColorStepCorner(&tmp,vector[i]);
	}
	graph = GraphCreate(&vector,(uint)2);
	for (uint i = 0; i < vector.size(); i++) 
	{
		ColorStepBlue(&tmp,vector[i]);
		GenerateGraph(&tmp,vector[i],graph,vector[i]);
	}
	tmp.CreateImage("after.bmp");
	Route firstroute(map->TourSize),secondroute(map->TourSize);
	int** dist = new int*[map->TourSize];
	int** via = new int*[map->TourSize];
	GraphPrint(graph);
	for (uint i = 0; i < map->TourSize; i++) 
	{
		dist[i] = new int[vector.size()];
		via[i] = new int[vector.size()];
		GraphDijkstraAlgorithm(graph,i,via[i],dist[i]);
	}
	firstroute.RouteBirth();
	firstroute.InsertFitness(dist);
	int counter = 99000;
	while(counter != 0)
	{
		secondroute.RouteBirth();
		secondroute.InsertFitness(dist);
		firstroute = firstroute.m_dist < secondroute.m_dist ? firstroute:secondroute;
		--counter;
	}
	std::ofstream ofs;
	std::ofstream outfile ("/home/pcmonkey/fff/software/final_tsp/dist.txt",std::ofstream::out);
	ofs.open ("/home/pcmonkey/fff/software/final_tsp/out.txt", std::ofstream::out);
	ofs<<"the Route chosen is : ";
	firstroute.Print();
	for (uint i = 0; i < map->TourSize-1; i++)
	{
		ofs<<"from:"<<firstroute.via[i]<<" to:"<<firstroute.via[i+1]<<" distance:"<<dist[firstroute.via[i]][firstroute.via[i+1]]<<endl;
		counter = i+1;
		PrintRoute(another,vector,firstroute.via[i],firstroute.via[i+1],via );
	}
	ofs<<"total distance covered:"<<firstroute.m_dist<<endl;
	outfile<<firstroute.m_dist;
	for (uint i = 0; i < map->TourSize; i++) 
	{
		delete dist[i];
		delete via[i] ;
	}
	ofs.close();
	outfile.close();
	delete dist;
	delete via;
	GraphDestroy(graph);
}
int main(int argc, char *argv[])
{
	srand (time(NULL));
	BitMap map1,map2;
	string name (argv[1]);
	name.erase(name.end()-4,name.end());
	name+="Pfig.bmp";
	map2.ReadBmp(argv[1]);
	map1.ReadBmp(argv[1]);
	Generate(&map1,&map2);
	map2.CreateImage(name.c_str());
    return argc;
}
