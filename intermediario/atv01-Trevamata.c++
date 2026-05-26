#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;
struct pessoa {
   string nome; 
   int peso;
};
  
int main() {
  vector<pessoa> pessoas;
  pessoa p;
  int qtd, p_galho;
  cin >> qtd;
  for (int i =0; i < qtd; i++){
    cin >> p.nome >> p.peso;
    pessoas.push_back(p);
  }
  bool passou = false;
  cin >> p_galho;
  for (int i=0; i < qtd; i++){
    if ( pessoas[i].peso > p_galho){
      if(!passou){
      cout << "Vamos virar almoço de aranhas gigantes!" << endl;
      }
      passou = true;
      cout << pessoas[i].nome << endl;
    }
  }
  if(!passou){
    cout << "Vamos todos encontrar a montanha!" << endl;
  }
}