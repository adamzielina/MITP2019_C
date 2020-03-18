#include "sort.h"
#include <stdlib.h>
#include <string.h>
#define size 300

void insertsort (void **inputTab, int sizeOfTab, int sizeOfObject,int (*compar) (const void *, const void *)){
   unsigned char *p1 = inputTab;
   unsigned char tab[size];
   int j;
   if(sizeOfTab < 2 || sizeOfObject == 0)
      return;
   for (int i = 1; i < sizeOfTab; i++){
      memcpy(tab,p1 + sizeOfObject * (i), sizeOfObject);
      j=i-1;
      while(j>=0 && ((*compar)((p1 + sizeOfObject * j),(tab))>0)){
         memcpy((p1 + sizeOfObject*(j+1)),(p1 + sizeOfObject*(j)), sizeOfObject);
         j=j-1;
      }
      memcpy(p1 + sizeOfObject*(j+1),tab, sizeOfObject);
   }
}
