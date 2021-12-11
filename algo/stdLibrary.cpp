#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {
  array<int, 5> arr = {5, 9, 12, 1, 12};
  sort(arr.begin(), arr.end());
  
  for (size_t i = 0; i < arr.size(); i++) {
    cout << arr[i] << endl;
  }

  return 0;
}
