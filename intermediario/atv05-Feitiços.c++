#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int N, M, C;

    cin >> N;
    vector<string> gerais(N);

    for (int i = 0; i < N; i++) {
        cin >> gerais[i];
    }

    cin >> M;
    vector<string> proibidos(M);

    for (int i = 0; i < M; i++) {
        cin >> proibidos[i];
    }
    cin >> C;
    for (int i = 0; i < C; i++) {
        string consulta;
        cin >> consulta;

        bool ehGeral = binary_search(gerais.begin(), gerais.end(), consulta);

        if (ehGeral) {
            cout << "Geral\n";
        } else {
            cout << "Proibido\n";
        }
    }
}
