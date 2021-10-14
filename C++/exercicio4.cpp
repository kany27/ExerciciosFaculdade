#include <iostream>

using namespace std;

int main() {

  system("ip -o -4 addr list wlp2s0 | awk '{print $4}' | cut -d/ -f1 >> out.txt");
  return 0;
}