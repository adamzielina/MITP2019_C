#include <stdio.h>

int main(){
   int x;
   int k=0;
   int p=1;
   printf("  podaj wysokosc trojkata\n");
   scanf("%d",&x);
   const int z=x;
   int y=z-1;
   int i=2*z-1;
   for (;x;x--){
      printf("\t");
      for (;y>0;y--)
         printf(" ");
      for (;i<=2*z-1;i+=1)
         printf("%%");
      i-=3+k;
      k+=2;
      y=z-1-p;
      p+=1;
      printf("\n");
   }
   printf("\n");
   return 0;
}
