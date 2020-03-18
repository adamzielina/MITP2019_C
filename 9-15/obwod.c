#include "point.h"
#include <math.h>

float obwod (struct POINT A,struct POINT B,struct POINT C){
   float dl_A=sqrt( (B.x-A.x)*(B.x-A.x)+(B.y-A.y)*(B.y-A.y) );
   float dl_B=sqrt( (C.x-B.x)*(C.x-B.x)+(C.y-B.y)*(C.y-B.y) );
   float dl_C=sqrt( (A.x-C.x)*(A.x-C.x)+(A.y-C.y)*(A.y-C.y) );
   float obw=dl_A+dl_B+dl_C;
   return obw;
}
