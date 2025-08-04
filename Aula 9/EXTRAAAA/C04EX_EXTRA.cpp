 // C04EX_EXTRA.CPP

 #include <iostream>
 #include <iomanip>

 using namespace std;

 int main(void)
 {
     for(uint16_t i = 1; i <= 20; ++i)
        cout << "i = " << setw(2) << i << endl;

     cout << endl;

     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
