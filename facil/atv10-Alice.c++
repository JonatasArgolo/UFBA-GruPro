#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float A, B;

  cin>> A >> B;

  int minutos_A = A;
  int minutos_B = B;
  
  int resposta_B;
  resposta_B = minutos_A - minutos_B;

  float segundos_A, segundos_B;

  segundos_A = A - minutos_A;
  segundos_B = B - minutos_B;
  
  float resposta_A;
 
  resposta_A = segundos_A - segundos_B;
  if (resposta_A < 0) {
    resposta_A = resposta_A + 0.60;
    resposta_B = resposta_B - 1;
  } 
  
  
  float F;

  
  F= resposta_A + resposta_B;
  cout<< fixed << setprecision(2) <<  F;
 
  
}