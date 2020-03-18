#include "compare.h"
#include "days.h"
#include <stdlib.h>
#include <string.h>

int dayprint(struct DAY * a){
   return 1;
}
int dayscmpr(struct DAY *a, struct DAY *b){
   dayprint(a);
   dayprint(b);
   int r=(*a).rok-(*b).rok;
   if(r!=0)
      return r;
   int m=(*a).miesiac-(*b).miesiac;
   if(m!=0)
      return m;
   return (*a).dzien-(*b).dzien;
}
int stringprint(const void *a){
    const char **ia=(const char **)a;
    return 1;
}
int stringcmpr(const void *a, const void *b){
    const char **ia=(const char **)a;
    const char **ib=(const char **)b;
    return strcmp(*ia,*ib);
}
