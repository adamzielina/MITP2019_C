#include <stdio.h>

int main(){
   long int n,sum;
   int i=0;
   int j=1;
   printf("  podaj szukany wyraz ciagu\n");
   scanf("%li",&n);
   switch (n){
      case 0:
         printf(" ten wyraz to:%d\n",i);
         break;
      case 1:
         printf(" ten wyraz to:%d\n",j);
         break;
      default :
         for (sum=0;n>1;n--){
            sum=i+j;
            i=j;
            j=sum;
            printf(" ten wyraz to:%li\n",sum);
         }
   }
   return 0;
}
