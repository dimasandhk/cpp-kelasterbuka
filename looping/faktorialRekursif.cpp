#include <iostream>
using namespace std;

// int faktorialLooping(int n) {
//   for (int i = 1; i <= n; n--) {
//     if (n > 1) {
//       cout << n << "B" << n * (n - 1) << endl;
//     }
//   }

//   return n;
// }

int faktorialRekursif(int n) {
  if (n <= 1) {
    cout << n;
    return n;
  }

  cout << n << "*";
  return n * faktorialRekursif(n - 1);
}

int main() {
  int angkaAwal;
  int res = 0;

  cout << "Masukkan angka awal: ";
  cin >> angkaAwal;
  
  res = faktorialRekursif(angkaAwal);
  cout << "\nHasil: " << res << endl;
  // cout << faktorialLooping(angkaAwal) << endl;

  return 0;
}