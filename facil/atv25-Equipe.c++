#include <iostream>
using namespace std;
int main() {
  int N, cTan, cSup;;

  cin >> N;

  cTan= cSup = 0;
  
  for (int c = 1; c <= N; c++) {
    int cont;

    cin >> cont;

    if (cont == 1){
      cTan++;
    }
    if (cont == 2){
      cSup++;
    }
  }
  if (cTan >= 1 && cSup >= 1){
    cout << "Equipe Balanceada" << endl;
  } 
  else {
    cout << "Equipe Desbalanceada" << endl;
    
  }


}