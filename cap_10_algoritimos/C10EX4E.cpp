  //C10EX4E.CPP

  #include <iostream>
  #include <cmath>

  using namespace std;

  void pausa(void)
  {
      cout << endl;
      cout << "Tecle <Enter> para encerrar...";
      cin.get();
  }

  int32_t sumsqrt(int32_t a,int32_t b,int32_t c,int32_t &r) // fiz por ref nao precisava/ nao podia
  {
    r = ((pow(a, 2)) + (pow(b, 2)) + (pow(c, 2)));

    return r;

    //return pow(a, 2) + pow(b, 2) + pow(c, 2); // trecho manzano
  }
 int main(void)
 {
     int32_t a, b, c, r;

     cout << "Entre valor para <A>: "; cin >> a;
     cin.ignore(80, '\n');

     cout << "Entre valor para <B>: "; cin >> b;
     cin.ignore(80, '\n');

     cout << "Entre valor para <C>: "; cin >> c;
     cin.ignore(80, '\n');

     //resultado = sumsqrt(a, b, c); // trecho manzano

     cout << "Resultado da soma dos quadrados: " << sumsqrt(a,b,c,r);

     pausa();
     return 0;
 }
