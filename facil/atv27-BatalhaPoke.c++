#include <iostream>
using namespace std;
int main() {
  int E, P, T = 0;

  cin >> E >> P;
  
  while ( true ) {
    T++;
    E-= P;
    P--;

    if(E <= 0 || P <=0) {
      break;
    }

    
  } 
  
   if ( E <= 0 ) {
    cout << T << endl;
  } else {
    cout << 'F' << endl;
  }
}