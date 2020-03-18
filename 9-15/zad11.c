#include <stdio.h>

void funkcja (){
   static int z=0;
   z++;
   printf("  funkcja wywolala sie: %d raz\n",z);
}

int main (){
   int x;
   printf("  podaj ilosc wywolan(>0)\n");
   scanf ("%d",&x);
   for (int i=0;i<x;i++)
      funkcja ();
   return 0;
}
