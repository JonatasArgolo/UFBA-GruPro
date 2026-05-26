#include <iostream>
using namespace std;
int main() {
  float X, Y;

  cin >> X >> Y;

  Y *= 9;

  if ( X > Y) {
   cout << "Precisa de mais difusores!" << endl;
    int A =( X - Y ) /9 ; 
    float A1= ( X - Y ) /9.0; 
    if ( A != A1) { 
      cout << A + 1 << endl;
    }
    else  {
      cout << A1 << endl;
    }
  }
    
   else {
    cout << "Lar doce lar." << endl;
  }




}