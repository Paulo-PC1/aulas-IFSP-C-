 // C03EX09.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
    int32_t a, b, r;

    cout << "Entre o valor <A>:"; cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre o valor <B>:"; cin >> b;
    cin.ignore(80, '\n');

    r = (a > b) ? a : b; // (condi��o) ? a : b -> condi��o (a > b) se verdadeiro faz a opera�ao dps do ? (r = a)  caso contrario faz opera��o dps dos : ( r = b)
    // condi��o verdadeira r = a; cond��o falsa r = b;
    cout << "\nMaior valor informado e :" << r << ".\n";

    cout << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
 }
