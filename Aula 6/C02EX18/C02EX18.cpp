 // C02EX18.CPP

 #include <iostream>
 #include <print>

 using namespace std;

 int main(void)
 {
    double  valor = 3.14159;

    println("Valor com 2 casas decimais ..: {:.2f}" , valor); // : significa formata��o 2 = .2 casas decimais f = float caso insira 7 antes do ".2" insere 7 casas em branco
    println("Valor em notacao cientifica .: {:e}", valor); // e =  nota��o cientifica pode ser "e" ou "E" da na mesma

    println("");
    print("Tecle <Enter> para encerrar...");
    cin.get();
    return 0;
 }
