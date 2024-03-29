#ifndef _HASHTABLE_
#define _HASHTABLE_

#include"STL.h"

#define SIZE_OF_HASH_TABLE ((int)15)

#define H_PRIMER_NUMBER ((int)151)

typedef char stringHashTable[SIZE_OF_HASH_TABLE] ;

void H_InitSaveDataIO(void);
int H_HashFunction (stringHashTable node) ;
void H_ProbeFunction ( stringHashTable node , int *StopPosition , int *FirstInsert ) ;
void H_InsertFunction(stringHashTable node) ;
int H_FindFunction(stringHashTable node) ;


#endif  // _HASHTABLE_