#include <iostream>
#include <vector>
#include <utility>
using namespace std;
  
int main() {

  int qtd_missoes;
  cin >> qtd_missoes;
  vector<int> missoes(qtd_missoes);
  for (int i =0; i < qtd_missoes; i++){
    cin >> missoes[i];
  }
  int total = 0;
  vector<int> bonus(qtd_missoes);
  for (int i =0; i < qtd_missoes; i ++){
    cin >> bonus[i];
  }
  int xp_necessario, xp_adc;
  cin >> xp_necessario >> xp_adc;
  for (int i = 0; i < qtd_missoes; i ++){
    total += ( missoes[i] * (bonus[i] + xp_adc));
  }
  if (total >= xp_necessario){
    cout << "Upou de Nivel!" << endl;
  }
  else {
    cout << "Nao foi dessa vez!" << endl;
  }
}