 // C04EX09.CPP
 // simula um laço seletivo com o uso do break para "quebrar" o laço infinito usa laço while para simular seletivo
 // valida a entrada de dados

 #include <iostream>

 using namespace std;

 int main(void)
 {
     float n;

     while (true)
     {
         cout << "Entre um valor numerico: ";
         if (cin >> n)
            break;
         else
         {
             cout << "Erro: entre apenas valor numerico" << endl;
             cin.clear(); // limpa erro da variavel p/ nova entrada
             cin.ignore(10000,  '\n');
         }
     }

     cin.ignore(80, '\n');

     cout << "Resultado = " << n + 5 << endl << endl;

     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
