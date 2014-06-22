/******	      Binary Heap- a struct by Ori Gofen ************************/
/******       creation date:28/8/13           ***************************/
/******       modification date:2/9/13        ***************************/
/************************************************************************/
/*This H-File contains the basic functions performed on the struct*******/
/* This heap rearrange the data in the vector. the place in index *******/
/* zero is the highest number, pay attention, the heap "lives" seperetly*/
/* from the vector, the items added to to heap are added to the vector***/
/* as well , but the removed items are not permenanly deleted but only***/
/* removed from the heap*/

#ifndef __BINARYHEAP_H__
#define __BINARYHEAP_H__

#include "vector.h"

typedef struct _Heap Heap;

int HeapCompFunction(Vector *_vector,size_t index,size_t PAR );

Heap* HeapBuild(Vector *_vector);

void  HeapDestroy(Heap* _heap);

ADTErr HeapInsert(Heap *_heap,int _data);

ADTErr HeapMax(Heap* _heap,int* _data);

ADTErr HeapExtractMax (Heap* _heap,int *_data);

int HeapItemsNum(Heap *_heap);

void HeapPrint(Heap* _heap);

void HeapSort(Vector* _vector);

Heap* HeapInitiate();
#endif

