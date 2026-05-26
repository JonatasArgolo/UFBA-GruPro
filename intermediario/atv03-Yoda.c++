#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<string> padawans(N);
  vector<pair<int,int>> missoes(N);
  for(int i=0;i<N;i++){
    cin >> padawans[i] >> missoes[i].first >> missoes[i].second;
  }

  vector<int> aux(N);
  for (int i = 0; i < N; i++) aux[i] = i;

 
  sort(aux.begin(), aux.end(), [&](int a, int b) {
      return padawans[a] < padawans[b];
  });

  
  for(int i: aux){
    int missoes_feitas = missoes[i].first - missoes[i].second;
    
    cout << padawans[i] << " " << missoes_feitas << endl;
  }
}