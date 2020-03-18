#include <stdio.h>

int main(){
   float x;
   float y;
   printf("  podaj liczbe x i y\n");
   scanf("%f%f",&x,&y);
   if ((x==(int)x)&&(y==(int)y)){
      if (x==y){
         printf("  x rowna sie y bo x=%1.0f a y=%1.0f\n",x,y);
      }
      else{
         if(x>y){
            printf("  x jest wieksze od y bo x=%1.0f a y=%1.0f\n",x,y);
         }
         else{
            printf("  y jest wieksze od x bo y=%1.0f a x=%1.0f\n",y,x);
         }
      }
   }
   else{
      if (x==y){
         printf("  x rowna sie y bo x=%f a y=%f\n",x,y);
      }
      else{
         if(x>y){
            printf("  x jest wieksze od y bo x=%f a y=%f\n",x,y);
         }
         else{
            printf("  y jest wieksze od x bo y=%f a x=%f\n",y,x);
         }
      }
   }
   return 0;
}

