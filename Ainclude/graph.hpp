/**********************************************************************
	Author: Ori Gofen
	Creation date: 17.9.13
	Last modified date: 2.10.13
************************************************************************************************************************	
	Description: Graph Struct

	Graph Struct rearranges meta-data  which represent connections
	between data in a Generic vector.

	Graphs assumptions:	
	
	Connections will have 2 attributes that describe them,Directed(or undirected),weighted(or unweighted)
 	the two different modes that can be set independantly of one another:
 	*Directed - means that an edge from src to dest is different from edge from dest to src.opposed to undirected graph
 	where src->dest = dest->src.
 	*Weighted - edge can have a weight value.opposed to not weighted graph where all edges have value of 1.
 	we will refer to one Connection as arc.
 	
 	Graph vertices are set at creation and cannot be changed.they run from zero to size of vector (which cannot be below 2)
	vertices supports the following operations: 
		add one arc between two of them every time we use joinFunction;
		remove one arc between two of them every time we use joinFunction;
		get weight of an arc if it is weighted;
		change weight of an arc if it exists;
		IMPORTANT:
		arc can not be implemented within a vertex to itself;
		In Undirected graph every arc is treated as a double arc (from a vertices and to a vertices) 
											
	About the API:
	Enum GraphMode-it describes the kind of graph the user wants,FULL currently unused.	
	Arcs run from zero to size-1.	
	
	GraphDoesPathExistBFS and GraphDoesPathExistDFS: function that find if a path exists between two
	vertices the both support loop as a valid input,they will receive two uint variables which represent
	source and destination, and return true(1) or false(0).
	GraphIsAdjacent: same input and output but the return value is true only if the vertices have a straight
	connection between them.
	GraphPrint: get's a printFunc pointer from the user containing A method to print Unrevealed data Vector's data type.
**************************************************************************************************************************/
#ifndef __GRAPH_H__
#define __GRAPH_H__

#include "ADTDefs.h"
#include <vector>
#define  INT_MAX 16777215
#define uint unsigned int
typedef std::vector<int> _Vector_;
typedef struct Graph Graph;
typedef enum GraphMode
{
	DIRECTED	= 1,
	WEIGHTED	= 2,
	FULL		= 4
}GraphMode;
Graph*	GraphCreate(_Vector_* _vec, unsigned int _graphMode);
void	GraphDestroy(Graph* _graph);
ADTErr	GraphJoin(Graph* _graph, uint _src, uint _dest);
ADTErr	GraphRemove(Graph* _graph, uint _src, uint _dest);
ADTErr	GraphJoinWT(Graph* _graph, uint _src, uint _dest, uint _weight);
ADTErr	GraphChangeWT(Graph* _graph, uint _src, uint _dest, uint _newWT, uint *_oldWT);
ADTErr	GraphGetWT(Graph* _graph, uint _src, uint _dest, uint *_weight);
int		GraphDoesPathExistBFS(Graph* _graph,uint _src,uint _dest);/* supports loop exsit*/
int 	GraphDoesPathExistDFS(Graph* _graph,uint _src,uint _dest);/* supports loop exsit*/
int		GraphIsAdjacent(Graph* _graph, uint _src, uint _dest);
void	GraphPrint(Graph* _graph);
ADTErr	GraphExpandedBFS(Graph* _graph, uint _src, uint* _path, int* _distance);
ADTErr	GraphDijkstraAlgorithm(Graph* _graph, uint _src, int* _via, int* _distance);

#endif
