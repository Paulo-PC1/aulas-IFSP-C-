 // C02EX14.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     int16_t x, y;

    // ++x igual x = x +1; y = x;
    x = 10; y = ++x; // soma +1 em x antes de transferir valor para y por isso y = 11
    //x = 10; x = x +1; y = x;
    cout << "\nX = " << x << " | Y = " << y << endl;

    // x++ igual y = x; x = x +1;
    x = 10; y = x++; // transfere x = 10 para y antes de somar +1 por isso y = 10
    //x = 10; y = x; x = x +1;
    cout << "\nX = " << x << " | Y = " << y << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
 }
