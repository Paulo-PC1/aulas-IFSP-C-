 //C04EX03_EXTRA.CPP
 // Exemplo de simulação de repita e repita até que

 #include <iostream>
 #include <ciso646>

 using namespace std;

 int main(void)
 {
     uint16_t n, i = 1;
     uint16_t fat {1};

     cout << "Programa Fatorial" << endl << endl;
     cout << "Fatorial de que valor: "; cin >> n;
     cin.ignore(80, '\n');

     do
        {
            fat *= i;
            ++i;
        }
     while (not (i > n)); // add not e ">" simula repita

     cout << endl;
     cout << "Fatorial de " << n << " = " << fat << endl;
     cout << endl;

     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
