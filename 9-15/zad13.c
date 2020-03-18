#include <stdio.h>
#include "days.h"

int main(){
   struct DAY data1,data2;
   printf ("  podaj date mniejsza (DDD,MMM,RRR)\n");
   scanf ("%d%d%d",&data1.dzien,&data1.miesiac,&data1.rok);
   printf ("  podaj druga date wieksza (DDD,MMM,RRR)\n");
   scanf ("%d%d%d",&data2.dzien,&data2.miesiac,&data2.rok);
   printf("  roznica to %d\n",days(data1,data2) );
   return 0;
}
