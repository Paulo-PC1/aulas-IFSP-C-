// C05EX08.CPP

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)
{

  cout << setprecision(10) << fixed << right;

  cout << setw(14) << pow(2.0,3.0)   << endl; // 2 elevado 3
  cout << setw(14) << pow(2.0,0.0)   << endl; // 2 elevado a 0

  cout << setw(14) << sqrt(144)      << endl; //rais de 144
  cout << setw(14) << sqrt(sqrt(16)) << endl; // rais rais de 16

  cout << setw(14) << cbrt(27)      << endl; // raiz cunica de 27
  cout << setw(14) << cbrt(sqrt(16)) << endl; // raiz cibica raiz quadrada de 16

  cout << "\nTecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
