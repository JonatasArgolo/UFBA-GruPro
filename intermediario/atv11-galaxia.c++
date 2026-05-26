#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<string, int> sistema;
    for (int i = 0; i < N; i++) {
        string nomeSistema, nomeMundo;
        int populacao;
        cin >> nomeSistema >> nomeMundo >> populacao;
        if (sistema.count(nomeSistema) == 0) {
            sistema[nomeSistema] = populacao;
        } else {
            if (populacao > sistema[nomeSistema]) {
                sistema[nomeSistema] = populacao;
            }
        }
    }
    string capitalGalaxia;
    int maiorPop = 0;
    for (auto it = sistema.begin(); it != sistema.end(); it++) {
        if (it->second > maiorPop) {
            maiorPop = it->second;
            capitalGalaxia = it->first;
        }
    }
    cout << capitalGalaxia << " " << maiorPop << endl;
    for (map<string,int> ::iterator it = sistema.begin(); it != sistema.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
}