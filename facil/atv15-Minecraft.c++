#include <iostream>
using namespace std;

int main() {
  int C, c, X;

  cin >> C >> c >> X;

  if (C % c == 0 && (C / c) * (C / c) * (C / c) <= X) {
      cout << "Eh possivel" << endl;
  } else {
      cout << "!Eh possivel" << endl;
  }
}