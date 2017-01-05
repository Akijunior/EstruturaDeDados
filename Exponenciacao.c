
#include <iostream>
#include <stdlib.h>

using namespace std;

double exponenciacao(double base, double exp) {

  if (exp == 0)
    return 1;
  return (base * exponenciacao(base, exp-1));
}

int main(){

  double base, exp;
  cout << "Digite a base: ";
  cin >> base;
  cout << "Digite o exponente: ";
  cin >> exp;
  cout << "Resultado: " << exponenciacao(base, exp) << endl;
  system("pause");}
