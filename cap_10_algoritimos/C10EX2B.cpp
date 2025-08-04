 //C10EX2B.CPP

 #include <iostream>

 using namespace std;

 void pausa(void)
 {
     cout << endl;
     cout << "Tecle <Enter> para encerrar...";
     cin.get();
 }

 void sum(uint32_t n)
 {
     uint32_t s = 0;

     for (int32_t i = 1; i <= n; ++i)
        s += i;
     cout << "O somatorio dos " << n; // techro manzano esqueci de por
     cout << "Soma dos numeros: " << s << endl;
 }

 int main(void)
 {
     uint32_t x;

     cout << "Entre valor para soma: "; cin >> x;
     cin.ignore(80, '\n');
     sum(x);
     return 0;

 }
