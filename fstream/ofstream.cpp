#include <iostream>
#include <fstream> // ofstream, ifstream, fstream
using namespace std;

int main(int argc, char const *argv[]) {
  ofstream dFile;
  string input;

  cout << "Masukkan Kalimat: ";
  getline(cin, input);
  dFile.open("data.txt", ios::app); // append (menambahkan)
  // ios::trunc / ios::out = overwrite
  dFile << input << endl; 
  dFile.close();

  return 0;
}