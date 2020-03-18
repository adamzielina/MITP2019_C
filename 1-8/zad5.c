#include <stdio.h>

int main(){
   float a;
   float b;
   char c;
   printf("\n podaj wyrazenie: ");
   scanf("%f%c%f",&a,&c,&b);
   if (c=='+'){                             /* lepiej switch */
      printf(" wynik: %1.0f\n\n",a+b);
   }
   else{
      if (c=='-'){
         printf(" wynik: %1.0f\n\n",a-b);
      }
      else{
         if (c=='*'){
            printf(" wynik: %1.3f\n\n",a*b);
         }
         else{
            if (c=='/'){
               if (b!=0){
                  printf(" wynik: %1.3f\n\n",a/b);
               }
               else{
                  printf(" nie dziel przez 0\n\n");
               }
            }
            else{
               printf(" najpierw wpisz liczbe | nastepnie wybrane dzialanie (+,-,*,/) | nastepnie druga liczbe\n");
            }
         }
      }
   }
   return 0;
}
