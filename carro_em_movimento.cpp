//excp024d.cpp

#include <iostream>
using namespace std;
int main (void){
  float tempo,velocidade,distancia,litros_usados;

  cout << "entre com o valor do tempo gasto:" << endl;
  cin >> tempo;
  cin.ignore (80,'\n');

  cout << "entre com o valor da velocidade media:" << endl;
  cin >> velocidade;
  cin.ignore(80,'\n');

  distancia = tempo * velocidade;
  litros_usados = distancia/12;

 cout << "a sua velocidade media era de " << velocidade << "o tempo de  " << tempo;
 cout << " sua distancia " << distancia << " seus litros usados no percurso " << litros_usados;

  return 0;
}
