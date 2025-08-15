#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <thread>
using namespace std;

string getFileLines(string filename) {
  ifstream userFile(filename);

  return "hi";
}

int main() {
  /*
   * initialize thread
   * thread first(foo);
   * thread second(bar);
   *
   * sync threads
   * first.join()
   * second.join()
   *
  //fstream myFile("testFile.txt");
  string line;
  while (getline(myFile, line)) {
    cout << line;
  }
  */

  string input;
  cout << "input file names: ";
  getline(cin, input);
  stringstream ss(input);
  string finalFile;

  while (ss >> finalFile) {
    ifstream inFile(finalFile);
  }

  return 0;
}
