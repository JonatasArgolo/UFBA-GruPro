#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int dinheiro_MI, qtdLojas, DiasViagem_Q;
    cin >> qtdLojas;
    vector<int> precoGarrafa_Xi(qtdLojas);
    for(int i=0; i <qtdLojas;i++){
        cin >> precoGarrafa_Xi[i];
    }
    sort(precoGarrafa_Xi.begin(), precoGarrafa_Xi.end());

    cin >> DiasViagem_Q;
    for(int i=0; i <DiasViagem_Q;i++){
        cin >> dinheiro_MI;
        auto it = upper_bound(precoGarrafa_Xi.begin(), precoGarrafa_Xi.end(), dinheiro_MI);
        cout << distance(precoGarrafa_Xi.begin(), it) << endl;
    }

}