#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    stack<string> tower;
    int score = 0;
    for (int i = 0; i < N; i++) {
        string block;
        cin >> block;
        if (!tower.empty()) {
            string top = tower.top();
            bool inverse = true;
            for (int j = 0; j < 3; j++) {
                if (block[j] == top[j]) {
                    inverse = false;
                    break;
                }
            }
            if (inverse) {
                tower.pop();
                score += 10;
                continue;
            }
        }
        tower.push(block);
        if ((int)tower.size() == M) {
            cout << "game over";
            return 0;
        }
    }
    cout << score << endl;
}