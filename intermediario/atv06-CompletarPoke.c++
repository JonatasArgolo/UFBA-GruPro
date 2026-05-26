#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<int> pokedex;
    int x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        pokedex.insert(x);
    }
    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> x;
        if (pokedex.count(x)) {
            cout << "Repetido" << endl;
        } else {
            cout << "Temos que pegar!" << endl;
            pokedex.insert(x);
        }
    }
}