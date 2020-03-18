#include <string.h>
#include <stdio.h>
#include "sortstr.h"

char** strinsertion(char**tab,int w){
   int z=0;
   for(int i=0;i<w-1;i++){
      for(int x=0;x+i>-1;x--){
         if(strcmp(*(tab+z+1+x),*(tab+z+x))<0){
            char*j=*(tab+z+1+x);
            *(tab+z+x+1)=*(tab+z+x);
            *(tab+z+x)=j;
         }
      }
      z++;
   }
   return tab;
}
