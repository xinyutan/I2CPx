#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ifstream input;
  ofstream output;
  input.open("input.txt");
  output.open("output.txt");
  long A, B;
  input >> A >> B;
  output << A+B;
  input.close();
  output.close();
  return 0;
}
