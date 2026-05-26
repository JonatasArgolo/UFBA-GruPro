#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct tempo {
  int dia;
  int mes;
  int ano;
};
 bool cmp( tempo i, tempo j){
   return (i.ano < j.ano || (i.ano == j.ano && i.mes < j.mes) || (i.ano == j.ano && i.mes == j.mes && i.dia < j.dia));
 }
int main() {
  vector<tempo> tempos;
  tempo t;
  int dia, mes, ano;
  while (cin >> dia >> mes >> ano){ 
    tempo a;
    a.dia = dia;
    a.mes = mes;
    a.ano = ano;
    tempos.push_back(a);
  }  
  sort( tempos.begin(), tempos.end(), cmp);
   for (int i=0; i< tempos.size(); i ++ ) {
  cout << tempos[i].dia << " " << tempos[i].mes << " " << tempos[i].ano << endl;
   }
} 