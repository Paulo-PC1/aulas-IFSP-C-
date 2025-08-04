 // C04EX_EXTRA_2.CPP

 #include <iostream>
 #include <iomanip>

 using namespace std;

 int main(void)
 {
     for(uint16_t i = 1; i <= 20; i += 2) // ++++1 gambiarra funciona mas não fazer ou add ++1 antes da saida
        cout << "i = " << setw(2) << i << endl;

     cout << endl;

     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
