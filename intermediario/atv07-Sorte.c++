#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<int> bolas;
    int x;
    for (int i = 0; i < N / 2; i++) {
        cin >> x;
        bolas.insert(x);
    }
    for (int i = 0; i < N / 2; i++) {
        cin >> x;
        bolas.insert(x);
    }
    int diferentes = bolas.size();
    if (diferentes == N) {
        cout << "Sortudo, ganhou os dois potes" << endl;
    } 
    else if (diferentes == N / 2) {
        cout << "Azarado" << endl;
    } 
    else {
        cout << "Ganhou um pote" << endl;
    }
}