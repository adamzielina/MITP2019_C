#ifndef compare_h
#define compare_h
#include "days.h"
int stringcmpr(const void *a, const void *b);
int dayscmpr(struct DAY *a, struct DAY *b);
int dayprint(struct DAY *a);
int stringprint(const void *a);
#endif
