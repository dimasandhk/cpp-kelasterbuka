#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  string input;
  cout << "Input: ";
  // Getline bisa nangkap kalimat
  getline(cin, input);
  
  int posisi = 0;
  int jumlah = 0;

  while(true) {
    posisi = input.find(" ", posisi + 1);
    jumlah++;
    if (posisi < 0) break;
  }  

  cout << "Jumlah kata: " << jumlah << endl;
  return 0;
}