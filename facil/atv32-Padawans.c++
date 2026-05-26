#include <iostream>
#include <vector>
using namespace std;
int main() {
  int N;
  cin >> N;

  vector<int> padaw(N);
  for (int i = 0; i < N; i++) {
    cin >> padaw[i];
  }
  
  float F;
  cin >> F;
  for (int g = 0; g < N; g++) {
    if (padaw[g] >= (F / 2)) {
  cout << g << " ";
    }
    
  }
}