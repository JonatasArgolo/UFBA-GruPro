#include <iostream>
using namespace std;
int main() {
  int P = 1, T;
  bool alarme = false;

  cin >> T;
   
  while ( P != 0 ){
   cin >> P;
    if ( P > T ){
    alarme = true;
    }
  }
  
  
  if ( alarme == true) {
   cout << "ALARME" << endl;
  } else {
   cout << "O Havai pode dormir tranquilo" << endl;
    
  }

}