#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ifstream input;
  ofstream output;
  input.open("input.txt");
  output.open("output.txt");
  long long A, B;
  input >> A >> B;
  long long C = A + B*B;
  output << C;
  input.close();
  output.close();
  return 0;
}
