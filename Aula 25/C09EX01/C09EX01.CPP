// C09EX01.CPP

#include <iostream>
#include <fstream> // biblioteca de manipulacao de arquivos

using namespace std;

int main(void)
{
  ofstream arqtxt("EXEMPLO1.TXT", ios::trunc); // Nome do arquivo; operacao do arquivo (é construtor )

  if (not arqtxt) {
    cerr << "Erro ao criar o arquivo." << endl;
    return 1;
  }

  cout << "Arquivo criado com sucesso." << endl;

  arqtxt.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
