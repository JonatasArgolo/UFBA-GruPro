#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<pair<int,string>> pessoas;
    pair<int,string> p;
    int dia, service, qtd_pessoas;
    cin >> dia >> service;
    for (int i=0; i < dia; i++){
     int falta = service;
     cin >> qtd_pessoas;
    for(int j=0; j < qtd_pessoas; j++){
        cin >> p.second >> p.first;
        pessoas.push(p);
      }
     while (!pessoas.empty() && falta > 0){
        cout << pessoas.top().second << endl;
        pessoas.pop(); 
          falta--;
     }
    }
}