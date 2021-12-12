#include <iostream>
#include <string>
using namespace std;

union WNI {
  int tahunLahir;
};

int main(int argc, char const *argv[]) {
  WNI otong = {
    tahunLahir: 1979,
  };

  cout << otong.tahunLahir << endl;
  return 0;
}