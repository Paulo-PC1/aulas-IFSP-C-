 // C04EX07.CPP

 #include <iostream>
 #include <iomanip>

 using namespace std;

 int main(void)
 {
     for(uint16_t i = 10; i >= 1; --i) // -= 2 cai de 2 em 2
        cout << "i = " << setw(2) << i << endl;

     cout << endl;

     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
