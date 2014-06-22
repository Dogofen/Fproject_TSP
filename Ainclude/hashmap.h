/**********************************************************************************************
	Author:	Ori Gofen
	Creation date:	1/9/13
	Last modified date:	2/9/13
	Description:
**********************************************************************************************/
#ifndef __HASH_H__
#define __HASH_H__

#include "ADTDefs.h"

typedef struct HashMap HashMap;

typedef struct Pair Pair;

typedef int (*HashFunc)(int _key, size_t _size);


HashMap*	HashMapCreate(size_t _size, HashFunc _hashFunc);

void		HashMapDestroy(HashMap *_hm);

ADTErr		HashMapInsert(HashMap *_hm, int _key,int _data);

int		HashMapRemove(HashMap *_hm, int _key);

int		HashMapFind(HashMap *_hm, int _key);

void		HashPrint(HashMap *_hm);


#endif
