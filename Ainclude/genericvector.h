/******	      Geberic Vector- a struct by Ori Gofen *********************/
/******       creation date:19/9/13           ***************************/
/******       modification date:21/9/13        ***************************/
/************************************************************************/

#ifndef __VECTOR_H__
#define __VECTOR_H__

#include "ADTDefs.h"
  
typedef struct _Vector Vector;
typedef void (*PrintFunc)(void **m_vec,size_t i);

ADTErr NumOfItem(Vector* _vec,size_t * _numof);

void VectorPrint(Vector* _vec,PrintFunc _printFunc);

ADTErr VectorSet(Vector* _vec,size_t _index,void* _data);

ADTErr VectorGet(Vector* _vec,size_t _index,void** _data);

ADTErr VectorDelete(Vector* _vec,void** _data);

ADTErr VectorInsert(Vector* _vec,void* _data);

void VectorDestroy(Vector* _vec);

Vector* VectorCreate(size_t _size,size_t _blocksize);

#endif
