 // C10EX4I.CPP

 #include <iostream>

 using namespace std;

 void pausa(void)
{
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

 float temp(float f, float &c)
 {
    c = ((f - 32) * 5) / 9;

    return c;
 }

 int main(void)
 {
    float f, c;

    cout << "Entre Temperatura em Fahrenheit:"; cin >> f;
    cin.ignore(80, '\n');

    cout << "Temperatura em Celcius: " << temp(f,c);
    cout << endl;

    pausa();
    return 0;
 }
