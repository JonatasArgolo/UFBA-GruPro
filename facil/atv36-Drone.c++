#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> mapa(N, vector<int>(N));
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      cin >> mapa[i][j];
    }
  }
  int C;
  cin >> C;

  int t_Especies = 0;

  for (int k = 0; k < C; ++k) {
   int X, Y;
    cin >> X >> Y;

  if (X >= 0 && X < N && Y >= 0 && Y < N) {
    t_Especies += mapa[X][Y];
    }
  }

  cout << t_Especies << endl;
}