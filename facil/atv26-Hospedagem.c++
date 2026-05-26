#include <iostream>
using namespace std;
int main() {
 int N, pedidos;
 string c;
 
  cin >> N;

  pedidos = 0;
  while ( cin >> c){
  if (c == "FIM")
    break; 

  if (c == "Casal")
   pedidos += 2; 
    if (c == "Triplo")
      pedidos += 3;
    if ( c == "Quadruplo")
      pedidos += 4;
    if ( c == "Familia")
      pedidos += 5;
  }
  if ( pedidos >= N){

    cout << "Pode reservar! Esses quartos cabem todos." << endl;
  }
  else {
    cout << "Procure outra pousada." << endl;
  }
}