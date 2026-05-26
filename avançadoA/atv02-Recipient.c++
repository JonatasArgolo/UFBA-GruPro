#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int qtdTroncos;
    cin >> qtdTroncos;
    vector<int> alturaTronco(qtdTroncos);
    for(int i=0;i<qtdTroncos;i++){
        cin >> alturaTronco[i];
    } 

    int esquerda = 0;
    int direita = qtdTroncos - 1;
    int aguaTotal = 0;

    while (esquerda < direita){
        int largura = direita - esquerda;

        int alturaAtual = min(alturaTronco[esquerda], alturaTronco[direita]);
        int aguaAtual = largura * alturaAtual;

        aguaTotal = max(aguaTotal, aguaAtual);

        if(alturaTronco[esquerda] < alturaTronco[direita]) {
            esquerda++;
        } else {
            direita--;
        }
    }
    cout << aguaTotal << endl;
}