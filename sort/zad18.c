#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "days.h"
#include "compare.h"
#include "sort.h"

struct DAY *dayinsert(int size);

int main (int argc,char*argv[]){
   if(argc!=3 ){
      printf("zad18\nusage: zad18 -n name\n\nname:\nbubblestr - for bubble sort[string type]\ninsertionstr - for insertion sort[string type]\nbubbledate - for bubble sort[date type]\ninsertiondate - for insertion sort[date type]\n\n");
   }
   if(strcmp(argv[1],"-n")==0 && strcmp(argv[2],"insertionstr")==0){
      int size=0;
      printf("Podaj rozmiar tablicy\n");
      scanf("%d",&size);
      char **tab = (char**)malloc(size*sizeof(char*));
      printf("wpisz slowa\n");
      char buf[0x1000] = {'\0'};
      for (int i = 0; i < size; i++){
         scanf("%s", buf);
         tab[i] = calloc(strlen(buf) + 1, sizeof(char));
         strcpy(tab[i], buf);
      }
      insertsort(tab, size, sizeof (char *), (int (*)(void*, void*))(stringcmpr));
      for(int i = 0; i < size; i++)
         printf("%s\n", tab[i]);
      free(tab);
   }
   if(strcmp(argv[1],"-n")==0 && strcmp(argv[2],"bubblestr")==0){
      int size;
      printf("Podaj rozmiar tablicy\n");
      scanf("%d",&size);
      char **tab = (char**)malloc(size*sizeof(char*));
      printf("Wpisz slowa\n");
      char buf[0x1000] = {'\0'};
      for (int i = 0; i < size; i++) {
         scanf("%s", buf);
         tab[i] = calloc(strlen(buf) + 1, sizeof(char));
         strcpy(tab[i], buf);
      }
      bubblesort(tab, size, sizeof (char *), (int (*)(void*, void*))(stringcmpr));
      for(int i = 0; i < size; i++)
         printf("%s\n", tab[i]);
      free(tab);
   }
   if(strcmp(argv[2],"bubbledate")==0){
      int size;
      printf("Podaj rozmiar tablicy\n");
      scanf("%d",&size);
      printf("podaj daty\n");
      struct DAY *dni = dayinsert(size);
      bubblesort(dni, size, sizeof(struct DAY),( int( * )( const void *, const void * ))  (dayscmpr));
      for(int i = 0; i < size; i++)
         printf("%d.%d.%d\n",dni[i].dzien,dni[i].miesiac,dni[i].rok);
      free(dni);
   }
   if(strcmp(argv[2],"insertiondate")==0){
      int size;
      printf("Podaj rozmiar tablicy\n");
      scanf("%d",&size);
      printf("podaj daty\n");
      struct DAY *dni = dayinsert(size);
      insertsort(dni, size, sizeof(struct DAY),( int( * )( const void *, const void * ))(dayscmpr));
      for(int i = 0; i < size; i++)
         printf("%d.%d.%d\n",dni[i].dzien,dni[i].miesiac,dni[i].rok);
      free(dni);
   }
   return 0;
}

struct DAY *dayinsert(int size){
   struct DAY *tab = (struct DAY*)malloc(size*sizeof(struct DAY));
   for (int i = 0; i < size; i++){
      char a,b;
      scanf("%d%c%d%c%d%", &tab[i].dzien,&a,&tab[i].miesiac,&b, &tab[i].rok);
   }
   return tab;
}
