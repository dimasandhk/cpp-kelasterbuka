#include <iostream>
using namespace std;

void func(int &b) {
  cout << b;
  cout << ", " << &b << endl << endl; 

  b = 9;
  cout << b << ", " << &b << " ini dari b" << endl;
}

int main(int argc, const char** argv) {
  int a = 5;
  cout << a << ", " << &a << endl;

  func(a);
  cout << a << ", " << &a;
  return 0;
}