#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<string, string> dic;
    string estrangeira, traducao;
    for (int i = 0; i < N; i++) {
        cin >> estrangeira >> traducao;
        dic[estrangeira] = traducao;
    }
    int M;
    cin >> M;
    cin.ignore();
    string frase;
    getline(cin, frase);

    stringstream ss(frase);
    string palavra;
    bool first = true;
    while (ss >> palavra) {
        if (!first) cout << " ";
        first = false;

        if (dic.count(palavra)) {
            cout << dic[palavra];
        } else {
            cout << palavra;
        }
    }
    cout << endl;
}
