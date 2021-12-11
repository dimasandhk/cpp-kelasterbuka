#include <iostream>
#include <algorithm>
using namespace std;

void cetakValue(array<int, 5> arr, int size) {
  for (size_t i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
}

int main(int argc, char const *argv[]) {
  array<int, 5> arr = {30, 12, 45, 21, 30};

  cout << "Array sebelum di sort: " << endl;
  cetakValue(arr, arr.size()); 

  int jumlah = count(arr.begin(), arr.end(), 30);
  cout << endl << "Jumlah angka 30 di arrray: " << jumlah << endl;

  sort(arr.begin(), arr.end());
  cout << endl << "Array setelah di sort: " << endl;
  cetakValue(arr, arr.size()); 

  return 0;
}
