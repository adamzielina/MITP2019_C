#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define size 300

void bubblesort (void **inputTab, int sizeOfTab, int sizeOfObject,int (*compar) (const void *, const void *)) {
   unsigned char *p1 = inputTab;
   unsigned char tab[size];
   if(sizeOfTab < 2 || sizeOfObject == 0)
      return;
   for (int i = 0; i < sizeOfTab - 1; i++) {
      for (int j = 0; j < sizeOfTab - 1 - i; j++) {
         if (((*compar)((p1 + sizeOfObject * j), (p1 + sizeOfObject * (j+1))))> 0) {
	    memcpy(tab, p1 + sizeOfObject*(j), sizeOfObject);
            memcpy(p1 + sizeOfObject*(j), p1 + sizeOfObject*(j+1), sizeOfObject);
            memcpy(p1 + sizeOfObject * (j+1), tab, sizeOfObject);
	 }
      }
   }
}
