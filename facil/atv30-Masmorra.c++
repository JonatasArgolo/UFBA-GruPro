#include <iostream>
using namespace std;
int main() {

  int N_portas;
  int level = 1, qtd;
  char tipo = ' ';

  cin >> N_portas;
  
  
  for ( int i = 0; i < N_portas; i++ ){
  
    
    cin >> tipo >> qtd;
    
  if ( tipo == 't' ) {
   level += qtd; 
   }

   
  if ( tipo == 'm' ){
   cout << "Combate iniciado" << endl;
     if ( level >= qtd ){
     cout << "VITORIA" << endl;
     level++;
    } else {
       cout << "Derrota! Fim da aventura" << endl;
       return 0;
    }
   }
    
    if ( tipo == 'b' ){
     level -= qtd;

      if ( level < 0){
        level = 0;
      }
    }
    
    
    if (level >= 5 ) {
      cout << "Aventura concluida" << endl;
      return 0; 
    }
  }
}