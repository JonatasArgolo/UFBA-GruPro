#include <iostream>
#include <map>
using namespace std;

int main() {
   int TipoSushi;
   cin >> TipoSushi;
   long long soma = 0;
   map<long long, int> mapa;
   mapa[0] = 0;
   for(int i =1;i <= TipoSushi; i++){
        int qtdSushi;
        cin >> qtdSushi;

        if (i % 2 != 0) {
            soma -= qtdSushi;
        } else {
            soma += qtdSushi;
        }

    if (mapa.count(soma)) {
            int l = mapa[soma] + 1;
            int r = i;
            cout << l << " " << r << "\n";
            return 0; 
        }

        mapa[soma] = i;
  
     }
    cout << -1 << "\n";

    return 0;
}