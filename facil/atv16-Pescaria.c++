#include <iostream>
using namespace std;

int main() {
 int N, P;

  cin >> N >> P;

  P *= N;
  
  if ( P < 500) {
    cout << "Paciencia Firmino!" << endl;
  }
  else if ( P >= 7500 ) {
    cout << "Vara de Iridio" << endl;
  }
  else if ( P >= 1800 ) {
    cout << "Vara de Fibra de Vidro" << endl;
  }
  else if ( P >= 500 ) {
    cout<< "Vara de Bambu" << endl;
  }
}