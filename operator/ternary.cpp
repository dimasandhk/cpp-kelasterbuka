#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int angka;

  cout << "Masukkan bilangan bulat: ";
  cin >> angka;

  string res = (angka % 2 == 0) ? "Bilangan Genap" : "Bilangan Ganjil";
  cout << angka << " adalah " << res;
  return 0;
}