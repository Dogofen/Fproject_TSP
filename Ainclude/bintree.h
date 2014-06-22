/******		Binary Tree- a struct by Ori Gofen ********************/
/******         creation date:24/8/13          ********************/
/******       modification date:23/9/13        ********************/

/*This H-File contains the basic functions performed on the struct*/
/*The functions- TreeInsert and TreeIsDataFound uses low level ****/
/*function,Searchtree.IsFullTree is a recursive function builtfrom*/
/***three different recursive functions(its easier than is sounds)*/
/* An additional printing traversal is added "print in order"     */

#ifndef __BINTREE_H__
#define __BINTREE_H__

#include "ADTDefs.h"

typedef struct _Tree Tree;


Tree * TreeCreate();

ADTErr TreeInsert(Tree* _tree,int data);

int TreeIsDataFound(Tree* _tree,int _data);

void TreeDestroy (Tree* _tree);

void TreePrint(Tree* _tree,size_t traverse);

int IsTreeFull(Tree* _tree);

#endif


