// C09EX04.CPP

#include <iostream>
#include <fstream>
#include <array>

using namespace std;

int main(void)
{
  array<float, 5> num;
  const char* conteudo; //char* = string
  size_t tamanho;
  ofstream arqbin("EXEMPLO2.BIN", ios::binary | ios::trunc);

  if (not arqbin) {
    cerr << "Erro ao abrir o arquivo." << endl;
    return 1;
  }

  cout << "Entre 5 valores numericos:" << endl;
  cout << endl;

  for (size_t i = 0; i < num.size(); ++i) {
    cout << "Informe valor " << i + 1 << ": ";
    cin >> num[i];
    cin.ignore(80, '\n');
  }

  conteudo = reinterpret_cast<const char*>(num.data()); // preparacao para gravacao
  tamanho = num.size() * sizeof(float); // calcular tamanho do conteudo

  arqbin.write(conteudo, tamanho);

  arqbin.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
