// C05EX12.CPP

#include <iostream>

using namespace std;

float a, b;

void soma(void)
{

  float r; // VARIAVEL LOCAL DA SUB-ROTINA SOMA

  cout << "Entre o 1o. numero: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Entre o 2o. numero: ";
  cin >> b;
  cin.ignore(80, '\n');

  r = a + b;

  cout << "O resultado da soma e: " << r << endl; //MOSTRA VALOR AQUI POR SER LOCAL (SOME APÓS A EXECUÇÃO DA SUB-ROTINA)
}

int main(void)
{
  cout << "Calculadora de Soma" << endl;
  soma();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
