#include <iostream>
using namespace std;

int main() {
  char z, g, d, c;

  cin >> z >> g >> d >>  c;
  
  if ( z == d && g == c) {
     cout << "Driblado" << endl;
     cout << "Gol" << endl;
  }

  else if(z == d && g != c){
    cout << "Driblado" << endl;
     cout << "...e o goleiro pega" << endl;
  }

  else if(z != d ){
    cout << "Bloqueado" << endl;
  }
}
