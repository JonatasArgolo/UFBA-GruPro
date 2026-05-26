#include <iostream>
using namespace std;

int main() {
  int N, Q;

  cin >> N >> Q;

  int R = Q - N;  
  
  if ( R % 2 == 0 && R > 0){
      cout << "vendido" << endl;
  }
  else {
   cout << "sinto muito" << endl;  
  }

}