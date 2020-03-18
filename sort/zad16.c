#include "sortint.h"
#include <string.h>
#include <stdio.h>

int main(int argc,char*argv[]){
   int tab[]={-5,12,0,127,1,1080,6};
   if (argc!=3)
      printf("\nusage: zad16 -n name\n\nname:\nbubble - for bubble sort\ninsertion - for insertion sort\n\n");
   else{
      if(strcmp(argv[1],"-n")==0){
         if(strcmp(argv[2],"insertion")==0)
            insert(tab,sizeof(tab)/sizeof(int));
         else{
            if(strcmp(argv[2],"bubble")==0)
               bubble(tab,sizeof(tab)/sizeof(int));
            else
               printf("\nusage: zad16 -n name\n\nname:\nbubble - for bubble sort\ninsertion - for insertion sort\n\n");
         }
      }
      else
         printf("\nusage: zad16 -n name\n\nname:\nbubble - for bubble sort\ninsertion - for insertion sort\n\n");
      return 0;
   }
}
