#include <iostream>
#include <vector>
using namespace std;
int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> matriz(N, vector<int>(M));

  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      cin >> matriz[i][j];
    }
  }
    
  int tipoPokemon;
  cin >> tipoPokemon;
    
  int qtdPokemons = 0;
  for (int i = 0; i < N; ++i) {
   for (int j = 0; j < M; ++j) {
    if (matriz[i][j] == tipoPokemon) {
      qtdPokemons++;
      }
    }
  }
  cout << "Ash pegou " << qtdPokemons << " pokemon" << endl;
  
}