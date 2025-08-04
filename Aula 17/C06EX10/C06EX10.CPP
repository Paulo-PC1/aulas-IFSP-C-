// C06EX10.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t a = 1;
  float b = 2.5;

  void *pg = nullptr; //ponteiro generico aponta pra qualquer variavel

  pg = &a; //assume endereco da variavel a
  cout << "Valor inteiro ...: " << *(int32_t*)pg << endl; // deve se dizer o tipo de dado dentro do bloco de operacao (casting), sintaxe: [ *(tipo_de_dado*)ponteiro ]

  pg = &b; //assume endereco da variavel b
  cout << "Valor real ......: " << *(float*)pg << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
/// b = (int)a; casting (coersão)
