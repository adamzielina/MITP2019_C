#include <stdio.h>

int main(){
   float C;
   float F;
   printf("  podaj temperature w celsjuszach\n");
   scanf("%f",&C);
   F=32+1.8*C;
   printf("  jest to %f w fahrenheitach\n",F);
   return 0;
}
