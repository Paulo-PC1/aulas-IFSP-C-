 //C02EX05.CPP

 #include <iostream>
 #include <locale>
 #include <windows.h>

 using namespace std;

 int main(void)
 {
     char nome[50];

     setlocale(LC_ALL, "Portuguese_Brazil.1252");
     SetConsoleCP(1252);

     cout << "Ol�. \nQual sua Gra�a? ";
     cin.getline(nome, 50);

     cout << endl;
     cout << "Oi " << nome << ", vamos estudar." << endl;
     cout << endl;

     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
