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

    r = (a > b) ? a : b; // (condição) ? a : b -> condição (a > b) se verdadeiro faz a operaçao dps do ? (r = a)  caso contrario faz operação dps dos : ( r = b)
    // condição verdadeira r = a; condção falsa r = b;
    cout << "\nMaior valor informado e :" << r << ".\n";

    cout << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
 }
