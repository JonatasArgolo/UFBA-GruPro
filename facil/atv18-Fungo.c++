#include <iostream>
using namespace std;
int main() {
  int A;
  char S;
  
  cin >> S >> A;
  
  if ( S == 'N') {
    cout << "Acesso permitido!" << endl; 
  } 
  
  else {
    if ( S == 'S' && A >= 30) {
      cout << "Imune! Siga para um local seguro" << endl;
    }
    else {
      if ( A >= 7 && A < 30 ) {
        cout << "Acesso negado! Fique em observacao" << endl;

      } else {
        cout << "Acesso negado! Isolamento urgente" << endl;
    
      }
    }
  }    


}