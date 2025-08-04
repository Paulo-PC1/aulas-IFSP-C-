 // C02EX07.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     int32_t a, b, r; // inteiro 32 bits

     cout << "Informe valor para variavel <A>: "; cin >> a; // caso inserir caractere alfanumerico: letras ao acionar enter ele pula a linha direto pro resultado
     cin.ignore(80, '\n');

     cout << "Informe valor para variavel <B>: "; cin >> b;
     cin.ignore(80, '\n'); // usa para limpar buffer entrada da tecla enter ó

     r = a + b;

     cout << "Resultado = " << r << endl;
     cout << endl;

     cout << "Tecle <ENTER> para encerrar...";
     cin.get();
     return 0;
 }
