#include "sortstr.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[]){
   char *tab[]={"ma","adam","azora","swojego"};
   int size=sizeof(tab)/sizeof(char*);
   if (argc!=3)
      printf("\nusage: zad17 -n name\n\nname:\nbubble - for bubble sort\ninsertion - for insertion sort\n\n");
   else{
      if(strcmp(argv[1],"-n")==0){
         if(strcmp(argv[2],"insertion")==0){
            strinsertion(tab,size);
            for(int i=0;i<size;i++)
               printf("%s\n",tab[i]);
            printf("(insertion sort)\n");
         }
         else{
            if(strcmp(argv[2],"bubble")==0){
               strbubble(tab,size);
               for(int i=0;i<size;i++)
                  printf("%s\n",tab[i]);
               printf("(bubble sort)\n");
            }
            else
               printf("\nusage: zad17 -n name\n\nname:\nbubble - for bubble sort\ninsertion - for insertion sort\n\n");
         }
      }
      else
         printf("\nusage: zad17 -n name\n\nname:\nbubble - for bubble sort\ninsertion - for insertion sort\n\n");
   }
   return 0;
}
