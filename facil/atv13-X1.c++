#include <iostream>
using namespace std;


int main() {
  int L1, L2, L3, P1, P2, P3, resultado_Lucas, resultado_Pedro;

  cin >> L1 >> P1;
  cin >> L2 >> P2;
  cin >> L3 >> P3;

  resultado_Lucas= L1+L2+L3;
  resultado_Pedro= P1+P2+P3;

  if ( resultado_Lucas < resultado_Pedro ) {
    cout<< "Pedro" << endl;
  } else if (resultado_Lucas > resultado_Pedro) {
      cout<< "Lucas" << endl;  
    }
    else {
        cout << "Empate" << endl;
      }  
  
}  
