#include <iostream>
using namespace std;

int main() {

 int T, D, V, P;

  cin>> T >> D >> V >> P;

  int R= (T/D) *P;
  
  cout<< (T * V) + R;
  
}