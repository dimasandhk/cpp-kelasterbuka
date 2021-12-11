#include <iostream>
using namespace std;

struct mahasiswa {
  string nama;
  string NIM;
  bool lulus;
};

int main(int argc, char const *argv[]) {
  mahasiswa Dimas = {
    nama: "Dimas Andhika",
    NIM: "312041841031",
    lulus: false
  };

  if (Dimas.lulus) cout << "horee" << endl;
  else cout << "belajar lagi ya";
  return 0;
}