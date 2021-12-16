#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  ifstream dFile;
  int nomor;
  string result, buffer, nama;

  dFile.open("data.txt");

  while(true) {
    getline(dFile, buffer);
    result.append("\n" + buffer);
    if(buffer == "data") break;
  }

  cout << result << endl;
  getline(dFile, buffer);
  cout << buffer << endl;

  int jumlahData = 0;
  while(!dFile.eof()) {
    dFile >> nomor;
    dFile >> nama;

    jumlahData++;
    cout << nomor << "\t" << nama << endl;
  }
  cout << "Jumlah Data: " << jumlahData;

  dFile.close();
  return 0;
}

// ios::in = default
// ios::ate = mulai dari akhir file
// ios::binary = membaca file binary

/*
    getline(dFile, buffer);
    result.append(buffer);
*/