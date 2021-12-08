#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  string kalimat = "Lorem Ipsum is simply dummy text of the printing and typesetting industry";
  cout << kalimat.substr(0, 30) << "..." << endl;

  // Mencari index dari suatu keyword
  string kalimatlg = "pepa pepi pepu pepu pepi pepa";
  int indexPertamaAwal = kalimatlg.find("pa");
  cout << indexPertamaAwal << endl;
  cout << kalimatlg.find("pa", indexPertamaAwal + 1) << endl;

  cout << endl << "Reverse: " << endl;
  // Reverse
  int indexPertamaAkhir = kalimatlg.rfind("pa");
  cout << indexPertamaAkhir << endl;
  cout << kalimatlg.rfind("pa", indexPertamaAkhir - 1);

  return 0;
}