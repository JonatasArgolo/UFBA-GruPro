#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, S;
  cin >> N;

  vector<int> alturas(N);

  for (int i = 0; i < N; i++){
    cin >> alturas[i];
  }

  cin >> S;
  
  int obs_pulados = 0;
  int venceu = 1; 
  
  for (int i = 0; i < N; i++) {
    if (alturas[i] > S) {
      venceu = 0; 
      break;
  } else {
    obs_pulados++;
    }
  }

  cout << obs_pulados << endl;
  cout << venceu << endl;
}