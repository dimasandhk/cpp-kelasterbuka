#include <iostream>
#include <array>
using namespace std;

int main() {
  // Dilihat dari length array yang kita inisiasi
  array<int, 0> arr;
  if (arr.empty()) {
    cout << "Arraynya kosong";
  } else {
    cout << "Array terisi"; 
  } 

  return 0;
}