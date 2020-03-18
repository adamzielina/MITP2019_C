#include <stdio.h>

int main(int argc,char*argv[]){
   char c;
   int count=0;
   if(argc!=2)
      printf("usage: zad19 file\n");
   else{
      FILE *plik=fopen(argv[1],"r");
      while(feof(plik)==0){
         c=getc(plik);
         if(c=='\n')
            count++;
      }
      fclose(plik);
      printf("podany plik posiada %d wierszy\n",count);
   }
   return 0;
}
