#include <iostream>
using namespace std;

enum warna {merah, putih, coklat, hijau, biru, ungu};

int main(int argc, char const *argv[]) {
  warna Baju = merah;
  if (Baju == 5) {
    cout << "Warnanya ungu" << endl;
  } else {
    cout << "Warnanya bukan ungu" << endl;
  }
  

  return 0;
}