// C06EX02.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int16_t idade = 25;
  int16_t *pidade = nullptr; /// * = definicao de ponteiro [declaracao]

  pidade = &idade;

  cout << "IDADE  = " << idade << " | End: = " << &idade; // valor variavel idade e endereço variavel idade
  cout << endl;
  cout << "PIDADE = " << *pidade << " | End: = " << &pidade; // (* = acesso a conteudo apontado [operacao]) conteudo variavel idade e endereço do ponteiro
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

/// &variavel =  acesso endereco variavel

//var = &xpto
/// *variavel =  acesso ao conteudo apontado pela variavel
