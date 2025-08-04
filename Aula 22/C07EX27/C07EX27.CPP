// C07EX27.CPP

#include <iostream>

using namespace std;

#define produto1(x, y) ((x) * (y)) // DEVE-SE colocar cada elemento entre parenteses
#define produto2(x, y) (x * y)

int main(void)
{
  cout << "(2 + 3) x 4 = " << produto1(2 + 3, 4) << endl; // (x) = 2+3, (y) = 4
  cout << "(2 + 3) x 4 = " << produto2(2 + 3, 4) << endl; // (x) = 3, (y) = 4

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
