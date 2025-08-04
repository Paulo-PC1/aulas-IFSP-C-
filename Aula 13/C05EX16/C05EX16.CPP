// C05EX16.CPP

#include <iostream>
#include <iomanip>

using namespace std;

//int r = 1; // r como variavel global (atualiza a contagem de 1 a 10

void incremento(void)
{
  //int r = 1; //r = variavel local (mantem o valor 1 )
  static int r = 1; // static int r = variavel local que se comporta como global (atualiza a cada contagem vai de 1 a 10)
  cout << setw(2) << r << endl;
  ++r;
}

int main(void)
{

  for(int i = 1; i <= 10; i++)
    incremento();

  cout << "\nTecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
