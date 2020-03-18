#include <stdio.h>
#include "sortint.h"

void bubble(int*tab,int z){
   for(int a=0;a<z-1;a++){
      for(int i=0;i<z-1;i++){
         if(*(tab+i)>*(tab+i+1))
            zamien(tab+i,tab+i+1);
      }
   }
   for(int x=0;x<z;x++)
      printf("%d ",*(tab+x));
   printf("\nbubble\n");
}
