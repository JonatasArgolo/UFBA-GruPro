#include <iostream>
using namespace std;

int main() {
  int P;

  cin >> P;

  for (int i = 1; i <= P; i++) {
   
    
    for ( int b = 1; b <= (P - i); b++) {
      cout << '>';    
      
    } 
     for (int c = 1; c <= i; c++){
       cout << '#';
     }
    
    cout << endl;
     
  }
}