// C06EX06.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t  a = 1;
  int32_t  *pa = nullptr;

  pa = &a;

  cout << "Endereco atual ...............: " << pa << endl;

  pa++; // avanca endereco de memoria do ponteiro (nao avança o conteudo da variavel apontada
  cout << "Proximo endereco a frente ....: " << pa << endl; // mostra endereco de memoria do ponteiro apos avanco do endereco

  pa++;
  cout << "Proximo endereco a frente ....: " << pa << endl;

  pa--; //  redrocede o valor de memoria do ponteiro e nao retrocede o conteudo da variavel apontada
  cout << "Endereco anterior para tras ..: " << pa << endl;  // mostra endereco de memoria do ponteiro apos retroceder o endereco

  pa--;
  cout << "Endereco anterior para tras ..: " << pa << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
