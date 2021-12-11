#include <iostream>
using namespace std;

struct aktor {
  string nama;
  int tahun_lahir;
};

struct film {
  string judul;
  string genre;
  int tahun;
  aktor pemeranUtama;
};

int main(int argc, char const *argv[]) {
  aktor dwayne = {
    nama: "Dwayne Johnson",
    tahun_lahir: 1962
  };

  film sanAndreas = {
    judul: "San Andreas",
    genre: "action",
    tahun: 2014,
    pemeranUtama: dwayne
  };

  cout << sanAndreas.pemeranUtama.nama << endl;
  cout << sanAndreas.judul << endl;
  return 0;
}