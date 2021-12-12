#include <iostream>
#include <bitset>
#include <string>
using namespace std;

void printBinary(unsigned short val, string name = "Hasil") {
  cout << name << " -> " << bitset<8>(val) << endl;
}

int main(int argc, char const *argv[]) {
  unsigned short a = 6, b = 10, c;

  // Bitwise AND - &
  cout << "BITWISE AND - &" << endl;
  printBinary(a, "A"), printBinary(b, "B");
  c = a & b;
  printBinary(c, "C"), cout << c << endl; // 2

  // Bitwise OR - |
  cout << endl << "BITWISE OR - |" << endl;
  printBinary(a, "A"), printBinary(b, "B");
  c = a | b;
  printBinary(c, "C"), cout << c << endl; // 14 / E

  // Bitwise XOR - ^
  cout << endl << "BITWISE XOR - ^" << endl;
  printBinary(a, "A"), printBinary(b, "B");
  c = a ^ b;
  printBinary(c, "C"), cout << c << endl; // 12 / C

  // Bitwise NOT - ~
  cout << endl << "BITWISE NOT - ~" << endl;
  printBinary(a, "A");
  c = ~a;
  printBinary(c, "C"), cout << c << endl; // 65529 

  cout << endl << "BITWISE SHL - <<" << endl;
  printBinary(a, "A"); // 00000110
  c = a << 2; //          00011000  
  printBinary(c, "C"), cout << c << endl; // 24

  cout << endl << "BITWISE SHR - <<" << endl;
  printBinary(a, "A"); // 00000110
  c = a >> 2; //          00000001 
  printBinary(c, "C"), cout << c << endl; // 1

  return 0;
}

  /*
  unsigned short a = 7; // 00000111
  2^0 + 2^1 + 2^2 = 1 + 2 + 4 -> 7/
  */
