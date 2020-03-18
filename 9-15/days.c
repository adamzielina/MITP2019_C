#include "days.h"

int days (struct DAY data1,struct DAY data2) {
   int roznica,dni_przestepne1,dni_przestepne2,dni_all1,dni_all2;
   dni_przestepne1=(data1.rok/4)-(data1.rok/100)+(data1.rok/400);    /*liczy ilosc lat  przestepnych w dacie*/
   dni_przestepne2=(data2.rok/4)-(data2.rok/100)+(data2.rok/400);
   dni_all1=dni_przestepne1*366+(data1.rok-dni_przestepne1)*365;
   dni_all2=dni_przestepne2*366+(data2.rok-dni_przestepne2)*365;

   /*przejscie przed gregorianski*/

   if(data1.rok==1582){
      if(data1.miesiac==10 && data1.dzien<14)
         data1.dzien-=10;
      else{
         if (data1.miesiac<10)
            data1.dzien-=10;
      }
   }
   else{
      if(data1.rok<1582)
         data1.dzien-=10;
   }

   if(data2.rok==1582){
      if(data2.miesiac==10 && data2.dzien<14)
         data2.dzien-=10;
      else{
         if (data2.miesiac<10)
            data2.dzien-=10;
      }
   }
   else{
      if(data2.rok<1582)
         data2.dzien-=10;
   }

   /*suma dni do podanego miesiaca*/

   int t[12]={31,28,31,30,31,30,31,31,30,31,30,31},dni_miesiac1=0,dni_miesiac2=0;
   for(int i=0;data1.miesiac-1>i;i++){
      if( ((data1.rok%4==0&&data1.rok%100!=0)|| data1.rok%400==0) ){
         t[1]=29;
         dni_miesiac1+=t[i];
      }
      else{
         t[1]=28;
         dni_miesiac1+=t[i];
      }
   }
   for(int i=0;data2.miesiac-1>i;i++){
      if( ((data2.rok%4==0&&data2.rok%100!=0)|| data2.rok%400==0) ){
         t[1]=29;
         dni_miesiac2+=t[i];
      }
      else{
         t[1]=28;
         dni_miesiac2+=t[i];
      }
   }
   int suma1=data1.dzien+dni_miesiac1+dni_all1,suma2=data2.dzien+dni_miesiac2+dni_all2;

   if ( !((data1.rok%4==0&&data1.rok%100!=0)||data1.rok%400==0)&&((data2.rok%4==0&&data2.rok%100!=0)||data2.rok%400==0) )     /*data1 nieprzestepna i data2 przestepna*/
      roznica=suma2-suma1-1;
   else{
      if( !((data2.rok%4==0&&data2.rok%100!=0)||data2.rok%400==0)&&((data1.rok%4==0&&data1.rok%100!=0)||data1.rok%400==0) )  /*data1 przestepna i data2 nieprzestepna*/
         roznica=suma2-suma1+1;
      else
         roznica=suma2-suma1;    /*obie  daty przestepne lub obie nieprzestepne*/
   }
   return roznica;
}
