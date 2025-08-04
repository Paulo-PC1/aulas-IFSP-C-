// C07EX26.CPP

#include <iostream>

using namespace std;

#define produto(x, y) ((x) * (y))

#define troca(a, b) \
{                   \
  int32_t x = (a);  \
  (a) = (b);        \
  (b) = x;          \
}
//adição de "\" entende como se fosse tudo 1 linha só
int main(void)
{
  int32_t a, b;

  cout << "Entre o valor A: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Entre o valor B: ";
  cin >> b;
  cin.ignore(80, '\n');

  troca(a, b);

  cout << "Valor A: " << a << endl;
  cout << "Valor B: " << b << endl;

  cout << "A x B = " << produto(a, b) << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
