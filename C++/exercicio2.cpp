#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  fstream arq, out;
  string line;

  arq.open("teste.txt", ios::in);
  out.open("novo.txt", ios::out);

  if(!arq) cout << "Arquivo não pode ser aberto" << endl;

  while(getline(arq, line)) {
    if((line.find("192.168.10.222")) != string::npos)
      out << line << endl;
  }

  return 0;
}