 // C02EX11.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     bool x; // pode-se declarar variavel ja com valor inicial boll x = true (exclusivo linguagem c++)

     cout << boolalpha;

     x = true;
     cout << "Valor X como Verdadeiro ...: " << x << endl;

     x = false;
     cout << "Valor X como Falso ........: " << x << endl;

     cout << noboolalpha;

     x = true;
     cout << "Valor X como Verdadeiro ...: " << x << endl;

     x = false;
     cout << "Valor X como Falso ........: " << x << endl;

     cout << endl;
     cout << "Tecle <Enter> para encerrar... ";
     cin.get();
     return 0;
 }
