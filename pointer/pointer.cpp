#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int a = 5;
  // int a mempunyai nilai dan addres (alamat)
  int *pointerA = nullptr;
  pointerA = &a;

  cout << "Nilai dari a: " << a << endl;
  cout << "Address dari a: " << pointerA << endl;
  cout << "Value dari pointer a: " << *pointerA;
  return 0;
}
