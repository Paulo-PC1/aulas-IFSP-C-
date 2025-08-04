 // C02EX16.CPP

 #include <iostream>
 #include <print> // para utilizar o comando print e println

 int main(void)
 {
     std::string nome = "Bjarne Stroustrup";
     uint16_t idade = 75;

     std::print("{} possui {} anos.\n" , nome, idade); // cada bloco de chaves escreve o conteudo na ordem q aparece

     std::println(""); // usado para pular linha se tiver texto dentro ese escreve texto e pula lilha
     std::print("Tecle <Enter> para encerrar...");
     std::cin.get();
     return 0;
 }
