// C08EX08.CPP

#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
  protected:
    string nome;
    int32_t idade;

  public:
    Pessoa() : nome(""), idade(0) {} // limpa o "lixo de memoria"

    void entrar(const string &n, int32_t i) // const cancela a referencia string tem q ser com referencia &n
    {
      nome = n;
      idade = i;
    }

    void exibir(void) const
    {
      cout << "Nome ..............: " << nome << endl;
      cout << "Idade .............: " << idade << endl;
    }
};

class Aluno : public Pessoa
{
  private:
    string modal;

  public:
    Aluno() : Pessoa(), modal("") {} // construtor aluno chama construtor classe pessoa limpo herança

    void entrar(const string &n, int32_t i, const string &m)
    {
      Pessoa::entrar(n, i);
      modal = m;
    }

    void exibir(void) const
    {
      Pessoa::exibir();
      cout << "Ativ. Esportiva ...: " << modal << endl;
    }
};

int main(void)
{

  Aluno aluno;
  string nome, modal;
  int32_t idade;

  cout << "Cadastro de Aluno na Academia" << endl;
  cout << endl;

  cout << "Nome ..............: ";
  getline(cin, nome);
  cout << "Idade .............: ";
  cin >> idade;
  cin.ignore(80, '\n');
  cout << "Ativ. Esportiva ...: ";
  getline(cin, modal);

  aluno.entrar(nome, idade, modal);

  cout << endl;
  cout << "Dados do Aluno Cadastrado:" << endl;
  cout << endl;

  aluno.exibir();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
