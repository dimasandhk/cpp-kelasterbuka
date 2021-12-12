#include <iostream>
using namespace std;

void printData(int val) {
  cout << "Value: " << val << endl;
}

int main(int argc, char const *argv[]) {
  int a, b;
  int c = (a = 4, printData(a), b = 10, printData(b), (a + b));

  printData(c);
  /*
  Value: 4
  Value: 10
  Value: 14
  */
  return 0;
}