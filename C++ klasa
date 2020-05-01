#include <iostream>
#include <vector>
using namespace std;


class kandydat{
   public:
      string imie_="NONAME";
      string nazwisko_="NONAME";
      int pesel_=00000000;
      string status_="KANDYDAT";
      unsigned int punkty_=0;
      kandydat(string,string,int,unsigned int);
      void przypisz(kandydat,kandydat);
};

kandydat::kandydat(string imie,string nazwisko,int pesel,unsigned int punkty): imie_(imie), nazwisko_(nazwisko),pesel_(pesel), punkty_(punkty) {
   status_="ZWERYFIKOWANY";
}

void kandydat::przypisz(kandydat o1,kandydat o2){
   o1.imie_=o2.imie_;
   o1.nazwisko_=o2.nazwisko_;
   o1.pesel_=o2.pesel_;
   o1.punkty_=o2.punkty_;
}

class student: public kandydat{
   public:
      int NR_indeksu_=0000;
      int rok_=1;
      student(string,string,int,unsigned int,int,int);
      void przypisz(student,student);
};

student::student(string imie,string nazwisko,int pesel,unsigned int punkty,int NR_indeksu,int rok): kandydat(imie,nazwisko,pesel,punkty),NR_indeksu_(NR_indeksu),rok_(rok){
   status_="STUDENT";
}

void student::przypisz(student o1,student o2){
   o1.imie_=o2.imie_;
   o1.nazwisko_=o2.nazwisko_;
   o1.pesel_=o2.pesel_;
   o1.punkty_=o2.punkty_;
   o1.NR_indeksu_=o2.NR_indeksu_;
   o1.rok_=o2.rok_;
}

int main(){
   kandydat k1("Janusz","Kolodziej",509827,198),k2("Adam","lopatka",3213321,200),k3("Weronika","Brzuch",3213432,150),k4("Radek","zieba",543324,120),k5("Julia","pajak",21321321,200);
   vector<kandydat> tab(4);
   tab[0]=k1; // jak sie usunie te przypisania to sie kompiluje w porzadku, wiec chyba sa zle chociac nie wiem czemu
   tab[1]=k2;
   tab[2]=k3;
   tab[3]=k5;
   for(int i=0; i<tab.size(); ++i){
      cout << "element "<< i << tab.at(i).imie_ << tab.at(i).nazwisko_<<tab.at(i).pesel_<<tab.at(i).punkty_<<endl;
   }
   return 0;
}



