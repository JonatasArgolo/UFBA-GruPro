#include <iostream>
using namespace std;
int main() {
 int N, P;

  cin >> N;

  int maior = 1;
  
  for ( int i = 1 ; i <= N; i++){ 

    cin >> P; 
 
     if ( P > maior) {
      maior = P;
     }
  }
  cout << maior << endl;
}  