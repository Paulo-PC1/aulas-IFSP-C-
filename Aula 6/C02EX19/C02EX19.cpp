 //C02EX19.CPP

 #include <iostream>
 #include <print>

 using namespace std;

 int main(void)
 {
     println("Numeros: {}, {} e {}", 1, 3, 2); // nessa linha insere os valores 1 no primeiro {} e assim respectivamente at� o ultimo valor
     println("Numeros: {0}, {2} e {1}", 1, 3, 2); // nessa linha insere o valor 1 na posi��o 0 e assim respectivamente 2 na posic�o 2 e 3 na posi��o 1

     println("");
     print("Tecle <Enter> para encerrar...");
     cin.get();
     return 0;
 }
