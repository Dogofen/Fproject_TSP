/******		Hash Table- a struct by Ori Gofen ********************/
/******         creation date:1/9/13          ********************/
/******       modification date:1/9/13        ********************/


HashSet * HashSetCreate(size_t _size,hashfunc _hashfunc);

void HashSetDestroy(HashSet* _hs);

ADTErr HashSetInsert(HashSet* _hs,int data);

ADTerr HashSetRemove(HashSet* _hs,int _data);

ADTerr HashSetFind(HashSet* _hs,int _data);

void HashPrint(HashSet);
#endif

