#include <stdio.h>

void zamien(int*a,int*b){
   int x=*a;
   *a=*b;
   *b=x;
}
int main(){
   int x,y;
   printf("podaj liczbe x i y\n");
   scanf("%d%d",&x,&y);
   zamien(&x,&y);
   printf("x = %d a y = %d\n",x,y);
   return 0;
}
