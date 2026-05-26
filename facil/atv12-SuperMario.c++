#include <iostream>
using namespace std;
int main() {
  int SC, MM, CK;

  cin >> SC >> MM >> CK;

  if ( SC == 30) {
    cout << "PROXIMO MUNDO" << endl;
  } 
  else {
   int faltando_SC = 30 - SC;
   int faltando_MM = 6 - MM;
   int faltando_CK = 3 - CK;
  
   cout << faltando_SC << " " << faltando_MM << " " << faltando_CK << endl;
    
  }
}