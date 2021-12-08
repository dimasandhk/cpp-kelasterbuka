#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int arr[5] = {12, 56, 2, 9, 45};
  
  for (int i = 0; i < sizeof(arr) / 4; i++) {
    cout << &arr[i] << endl;
  }

  cout << endl;
  for(int &num : arr) {
    cout << num << " address " << &num << endl;
  }

  return 0;
}
