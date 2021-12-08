#include <iostream>
using namespace std;

int main() {
  int arr[5] = {4, 10, 3, 7, 8};
  int size = sizeof(arr) / 4;

  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
}
