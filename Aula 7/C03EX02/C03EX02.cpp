 //C03EX02.CPP

 #include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b;

    cout << "Entre o valor <A>: "; cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre o valor <B>: "; cin >> b;
    cin.ignore(80, '\n');

    cout << "\n";

    if (int32_t r = a + b; r > 10) // economia de memoria pois n�o grava a variavel r na mem�ria da maquina pois ela � declarada na decis�o
        cout << "Resultado = " << r << endl << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
}
