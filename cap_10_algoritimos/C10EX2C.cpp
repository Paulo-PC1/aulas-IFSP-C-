 //C10EX2C.CPP

 #include <iostream>

 using namespace std;

 void pausa()
 {
     cout << endl;
     cout << "Tecle <Enter> para encerrar...";
     cin.get();
 }

void fibonacci(int n) {
    int t1 = 0, t2 = 1;

    if (n <= 0) {
        cout << "Entre um numero positivo, maior que zero." << endl;
        return;
    }

    cout << "Serie de Fibonacci ate " << n << " termos: ";

    if (n >= 1) {
        cout << t1;
    }
    if (n >= 2) {
        cout << ", " << t2;
    }

    for (int i = 3; i <= n; ++i) {
        int proxTermo = t1 + t2;
        cout << ", " << proxTermo;
        t1 = t2;
        t2 = proxTermo;
    }

    cout << endl;
}
 int main(void)
 {
     uint32_t x;

     cout << "Entre valor inteiro:"; cin >> x;
     cin.ignore(80, '\n');
     fibonacci(x);

     return 0;
 }
