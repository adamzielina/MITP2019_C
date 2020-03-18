#include <stdio.h>

int main(){
   int a,b,c,d;
   printf("\tpodaj 4 liczby naturalne maks 4-cyfrowe:\n");
   scanf("%d%d%d%d",&a,&b,&c,&d);
   if (a>9999||b>9999||c>9999||d>9999){
      printf("\tmaja byc 4-cyfrowe\n\n");
   }
   else{
      printf("\t%4d\n\t%4d\n\t%4d\n\t%4d\n\t----\n\t%4d\n",a,b,c,d,a+b+c+d);
   }
   return 0;
}
