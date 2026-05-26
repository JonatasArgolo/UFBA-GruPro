#include <iostream>
#include <vector>
using namespace std;
int main() {
  int M, N;

  cin >> M;
  cin >> N;

  vector<int> XP(N);
  vector<int> bonus(N);
  for (int i = 0; i < N; i++) {
  cin >> XP[i];
  }

      
  for (int i = 0; i < N; i++) {
  cin >> bonus[i];
  }

  int totalXP = 0;

      
  for (int i = 0; i < N; i++) {
   totalXP += XP[i] * bonus[i];
  }


  if (totalXP >= M) {
   cout << "Upou de Nivel!" << endl;
  } else {
   cout << "Nao foi dessa vez!" << endl;
  }
}