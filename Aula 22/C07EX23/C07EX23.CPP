// C07EX23.CPP

#include <iostream>

using namespace std;

using integer = int32_t; // apelido do tipo de dado int32_t como integer
using real = float;
using inteiro = integer; // apelido de apelido (encadeamento de apelidos)

int main(void)
{

  inteiro a;
  real b;

  cout << "Entre um valor inteiro: ";
  cin >> a;
  cin.ignore(80, '\n');
  cout << "Foi informado o valor: " << a << endl;

  cout << endl;
  cout << "Entre um valor real: ";
  cin >> b;
  cin.ignore(80, '\n');
  cout << "Foi informado o valor: " << b << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
