 //C04EX01.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     uint16_t n, i = 1;
     uint64_t fat {1};

     cout << "programa Fatorial" << endl << endl;
     cout << "fatorial de que valor: "; cin >> n;
     cin.ignore(80, '\n');

     while (i <= n)
     {
         fat *= i;
         ++i;
     }

     cout << endl;
     cout << "Fatorial de " << n << " = " << fat << endl;
     cout << endl;

     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
