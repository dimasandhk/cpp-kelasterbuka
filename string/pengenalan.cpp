#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  char p = 's';
  string str = "Sandhika Galih";
    
  cout << str << endl << endl;
  string arr[3] = {"dimas andhika", "galih pratama", "sandhika galih"};
  for(string nama : arr) {
    if (nama.compare("galih") > 0) {
      cout << "ketemu" << endl;
    } else {
      cout << nama << endl;
    }
  }

  return 0;
}

  // Char = 1 huruf tanda kutip 1  
  // String = bebas tanda kutip 2
  // Char bukan string tapi string pasti kumpulan char