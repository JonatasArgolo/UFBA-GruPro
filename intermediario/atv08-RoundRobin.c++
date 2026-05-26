#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    queue<int> fila;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        fila.push(x);
    }
    for (int t = 0; t < M && !fila.empty(); t++) {
        int atual = fila.front();
        fila.pop();
        atual--;
        if (atual > 0) {
            fila.push(atual);
        }
    }
    if (fila.empty()) {
        cout << "pronto" << endl;
    } else {
        cout << fila.size() << endl;
        while (!fila.empty()) {
            cout << fila.front() << " ";
            fila.pop();
        }
        cout << endl;
    }
}