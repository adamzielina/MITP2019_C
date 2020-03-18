#include <stdio.h>

int main(){
   int x,y;
   printf("  podaj dlugosc boku\n");
   scanf("%d",&x);
   const int z=x;
   printf("\n\t");
   for (;x;x--){
      switch (x){
         case 1:
            for (y=z;y;y--){
               printf("%%");
            }
            printf("\n\n");
            break;
         default :
            if (x==z){
               for (y=z;y;y--){
                  printf("%%");
               }
               printf("\n\t");
            }
            else{
               printf("%%");
               for (y=z-2;y;y--){
                  printf(" ");
               }
               printf("%%\n\t");
            }
      }
   }
   return 0;
}
