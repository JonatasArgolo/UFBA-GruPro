#include <iostream>
using namespace std;
int main() {
  
  int N, pedidos1, pedidos2;

  cin >> N;

  pedidos1 = pedidos2 = 0;
  
  for (int g = 1; g <= N; g++) {
  int pedidos;

    cin >> pedidos;

    if ( pedidos == 10){
      pedidos1++;
    }
    
    if (pedidos == 11) {
      pedidos2++;
    }
  }
  
  if( pedidos1 > pedidos2){
    cout << "Tradicional" << endl;
  } 
  else {
    cout << "Geleia" << endl;
  }

}