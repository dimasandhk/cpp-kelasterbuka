#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int a = 5;
  float b = 6.67f;
  char c = 'd';

  cout << a + (int) b << endl; // 11
  cout << c + a << endl; // 105
  cout << (char)(c + a) << endl; // i
   
  return 0;
}
