#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream arq;

  arq.open("dados.txt", ios::out);
  if(!arq) {
    cout << "Arquivo não pode ser aberto." << endl;
    abort();
  }

  arq << "Dados do usuário: " << endl;
  arq << "\nNome: Kanydian Esteves canedo." << endl;
  arq << "\nIdade: 22 anos." << endl;
  arq << "\nFormação: Cursando Analise em desenvolvimento de sistemas" << endl;
  arq << "\nEmpresa aonde trabalha: Seti - Soluções em tecnologia." << endl;
  arq << "\nCargo: Desenvolvedor full Stack." << endl;

  arq.close();

  return 0;   
}