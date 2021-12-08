#include <iostream>
#include <array>
using namespace std;

void showNilai(int i) {
  if (i == 0) {
    cout << "0 - 9: ";
  } else if (i == 10) {
    cout << "100: ";
  } else {
    cout << i * 10 << " - " << (i * 10) + 9 << ": ";
  }
}

int main() {
  array<int, 10> nilai;

  for (int i = 0; i <= nilai.size(); i++) {
    cout << "Jumlah Siswa dengan nilai ";
    showNilai(i);
    cin >> nilai[i];
  }

  cout << endl << "Info Grafik Nilai: " << endl;
  for (int i = 0; i <= nilai.size(); i++) {
    showNilai(i); 

    for (int jml = 0; jml < nilai[i]; jml++) {
      cout << "*";
    }
    cout << endl;
  }
  
  return 0;
}