#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  string name1 = "sandhika galih";
  string name2 = "dimas andhika";

  // REPLACE
  cout << "REPLACE & FIND: " << endl;
  cout << name1.replace(name1.find("galih"), 5, "pratama") << endl;
  cout << name2.replace(name2.find("andhika"), 7, "saputra") << endl << endl;

  // INSERT
  cout << "INSERT & FIND: " << endl;
  cout << name1.insert(name1.find("pratama"), "galih ") << endl;
  cout << name2.insert(name2.find("saputra"), "aji ") << endl << endl;

  //  SWAP 
  cout << "SWAP: " << endl;
  cout << name1.append(", ") << name2 << endl;
  name1.swap(name2);
  cout << name1.append(", ") << name2 << endl;

  return 0;
}