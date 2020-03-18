#include <stdio.h>

int main(){
   float x;
   printf("  podaj liczbe\n");
   scanf("%f",&x);
   if(x==(int)x){
      printf("  liczba jest calkowita");
      if((int)x%2==0){
         printf(" i parzysta\n");
      }
      else{
         printf(" i nieparzysta\n");
      }
   }
   else{
      printf("  liczba nie jest calkowita\n");
   }
   return 0;
}
