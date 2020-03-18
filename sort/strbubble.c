#include <stdio.h>
#include "sortstr.h"
#include <string.h>

char** strbubble(char**tab,int z){
   for(int a=0;a<z-1;a++){
      for(int i=0;i<z-1;i++){
         if(strcmp(*(tab+i),*(tab+i+1))>0){
            char*j=*(tab+i);
            *(tab+i)=*(tab+i+1);
            *(tab+i+1)=j;
         }
      }
   }
   return tab;
}
