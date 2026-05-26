#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> mapa(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mapa[i][j];
        }
    }
    int X, Y;
    cin >> X >> Y;
    if (mapa[X][Y] == 0) {
        cout << 0 << endl;
        return 0;
    }
    vector<vector<bool>> visitado(N, vector<bool>(N, false));
    queue<pair<int, int>> fila;
    fila.push(make_pair(X, Y));
    visitado[X][Y] = true;
    int area = 0;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    while (!fila.empty()) {
        pair<int, int> atual = fila.front();
        fila.pop();
        int x = atual.first;
        int y = atual.second;
        area++;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                if (!visitado[nx][ny] && mapa[nx][ny] == 1) {
                    visitado[nx][ny] = true;
                    fila.push(make_pair(nx, ny));
                }
            }
        }
    }
    cout << area << endl;
}