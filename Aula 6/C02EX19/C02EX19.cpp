 //C02EX19.CPP

 #include <iostream>
 #include <print>

 using namespace std;

 int main(void)
 {
     println("Numeros: {}, {} e {}", 1, 3, 2); // nessa linha insere os valores 1 no primeiro {} e assim respectivamente até o ultimo valor
     println("Numeros: {0}, {2} e {1}", 1, 3, 2); // nessa linha insere o valor 1 na posição 0 e assim respectivamente 2 na posicão 2 e 3 na posição 1

     println("");
     print("Tecle <Enter> para encerrar...");
     cin.get();
     return 0;
 }
