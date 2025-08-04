1// C07EX25.CPP

#include <iostream>

using namespace std;

#define menor_valor(v1, v2) ((v1 < v2) ? (v1) : (v2)) // (v1, v2) = valor a e b que entra/ ((v1 < v2) ? (v1) : (v2)) = abertura do bloco de operação [compara v1 e v2] e retorna ou v1 ou v2
// macro (sub-rotina genérica) toda operação em 1 UNICA linha
int main(void)
{

  int32_t a, b, resp;

  cout << "Entre o 1o. valor: "; cin >> a;
  cin.ignore(80, '\n');
  cout << "Entre o 2o. valor: "; cin >> b;
  cin.ignore(80, '\n');

  resp = menor_valor(a, b);

  cout << "Menor valor: " << resp << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

