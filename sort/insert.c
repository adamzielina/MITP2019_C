#include <stdio.h>
#include "sortint.h"

void insert(int*tab,int w){
   int z=0;
   for(int i=0;i<w-1;i++){
      for(int x=0;x+i>-1;x--){
         if(*(tab+z+1+x)<*(tab+z+x))
            zamien(tab+z+1+x,tab+z+x);
      }
      z++;
   }
   for(int y=0;y<w;y++)
      printf("%d ",*(tab+y));
   printf("\ninsertion\n");
}
