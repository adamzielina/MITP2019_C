#include "point.h"

float pole (struct POINT A,struct POINT B,struct POINT C){
   float pol=0.5*( (B.x-A.x)*(C.y-A.y)-(B.y-A.y)*(C.x-A.x) ) ;
   if (pol<0)
      return (-1)*pol;
   return pol;
}
