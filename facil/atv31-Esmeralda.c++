#include <iostream>
#include <vector>
using namespace std;
int main() {
 int n;
  
  cin >> n;
   vector<int> esmerald(n);
  
  for (int i = 0; i < n; i++) {
  cin >> esmerald[i];
  } 

 
  int C;
  cin >> C;
  
  for (int g = 0; g < n; g++) {
  if (esmerald[g] == C){
    cout << C << endl;

    return 0;
  }
    
  }
  
  cout << "-1" << endl;
}