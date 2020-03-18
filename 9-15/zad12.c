#include <stdio.h>

int main() {
   int x,n=1;
   printf("  podaj liczbe:\n");
   scanf("%d",&x);
   for (;n<1000;n++){
      if(n*100==x)
         printf("  %d PLN = %d*100 + 0*50 + 0*20\n",x,n);
      if(n*50==x)
         printf("  %d PLN = 0*100 + %d*50 + 0*20\n",x,n);
      if(n*20==x)
         printf("  %d PLN = 0*100 + 0*50 + %d*20\n",x,n);
      for(int i=1;i<1000;i++){
         if(i*100+n*50==x)
            printf("  %d PLN = %d*100 + %d*50 + 0*20\n",x,i,n);
         if(i*100+n*20==x)
            printf("  %d PLN = %d*100 + 0*50 + %d*20\n",x,i,n);
         if(i*50+n*20==x)
            printf("  %d PLN = 0*100 + %d*50 + %d*20\n",x,i,n);
         if(i*100+n*50+n*20==x)
            printf("  %d PLN = %d*100 + %d*50 + %d*20\n",x,i,n,n);
      }
   }
   return 0;
}
