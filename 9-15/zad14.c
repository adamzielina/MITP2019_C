#include <stdio.h>
#include "point.h"

int main(){
   struct POINT A,B,C;
   printf(" podaj wspolrzedne wierzcholka A trojkata ABC\n");
   scanf ("%d%d",&A.x,&A.y);
   printf(" podaj wspolrzedne wierzcholka B trojkata ABC\n");
   scanf ("%d%d",&B.x,&B.y);
   printf(" podaj wspolrzedne wierzcholka C trojkata ABC\n");
   scanf ("%d%d",&C.x,&C.y);
   printf(" obwod tego trojkata to: %f\n pole tego trojkata to: %f\n",obwod(A,B,C),pole(A,B,C));
   return 0;
}
