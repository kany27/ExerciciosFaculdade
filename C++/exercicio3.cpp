#include <iostream>
#include <cstdlib> //lib de funções padrões.
#include <ctime> //lib de funções de tempo.

using namespace std;

int main() {
  system("color 0A"); //trocando de cor para visualizar no terminal.
  srand(time(0)); //sorteia um número x para iniciar o cálculo.
  const int num_safe = rand() % 100; //salva na constante o número calculado para o jogo.
  bool set, bigger;
  int num_tenta, kick, tenta = 0; 
  double points = 1000.0;
  char dificult;

  cout << "Escolha seu nível de dificuldade: " << endl;
  cout << "Fácil (F), Médio (M), Difícil (D)" << endl;
  cin >> dificult;

  if(dificult == 'F' || dificult == 'f')      num_tenta = 15;
  else if(dificult == 'M' || dificult == 'm') num_tenta = 10;
  else if(dificult == 'D' || dificult == 'd') num_tenta = 5; 

  for(tenta = 1; tenta <= num_tenta; tenta++) {
    cout << "\nTentativa " << tenta << endl;
    cout << "Qual seu chute?" << endl;
    cin >> kick;

    double lost_points = abs(kick - num_safe)/2.0;
    points = points - lost_points;

    cout << "O valor do seu chute é: " << kick << endl;
    set = kick == num_safe;
    bigger = kick > num_safe;

    if(set)     break;
    if(bigger)  cout << "Seu chute foi maior que o número secreto, tente novamente" << endl;
    if(!bigger) cout << "Seu chute foi menor que o número secreto, tente novamente" << endl;
  }
  cout << "Fim de jogo!" << endl;
  if(!set) cout << "Você perdeu! Tente novamente." << endl;
  if(set) {//condição caso o resultado do número seja correto.
    cout << "Parabéns !! Você acertou o número secreto!" << endl;
    cout << "Você acertou o número secreto em " << tenta << " tentativas." << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Sua pontuação foi de " << points << " pontos." << endl;
  }
  return 0;
}