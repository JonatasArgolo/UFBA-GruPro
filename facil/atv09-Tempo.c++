#include <iostream>
#include <iomanip>
using namespace std;

  
int main() {
  int A, B, C, D, E, F;

  cin >> A >> B >> C >> D >> E >> F;

  A= abs(A - 2023) *2;
  B= abs(B - 2023) *2;
  C= abs(C - 2023) *2;
  D= abs(D - 2023) *2;
  E= abs(E - 2023) *2;
  F= abs(F - 2023) *2;
  
  cout << "Luther" << " " << A << endl;
  cout<< "Diego" << " " << B << endl;
  cout<< "Alisson" << " " << C << endl;
  cout<< "Klaus" << " " << D << endl;
  cout<< "Five" << " " << A + B + C + D + E + F << endl;
  cout<< "Ben" << " " << E << endl;
  cout<< "Viktor" << " " << F << endl;
}