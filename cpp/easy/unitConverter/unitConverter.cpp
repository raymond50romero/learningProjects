#include <iostream>
#include <string>
using namespace std;

double metersToFeet(double meter) { return meter * 3.28084; }

double feetToMeters(double feet) { return feet / 3.28084; }

double fToC(double f) { return (f - 32) * 5 / 9; }

double cToF(double c) { return (c * 9 / 5) + 32; }

double cmToIn(double cm) { return cm / 2.54; }

double inToCm(double in) { return in * 2.54; }

int main() {

  cout << "what would you like to convert?\n";
  while (true) {
    char input;
    cout << "meters to feet (a)\n";
    cout << "feet to meters (b)\n";
    cout << "fahrenheit to celcius (c)\n";
    cout << "celcius to fahrenheit (d)\n";
    cout << "centimeters to inches (e)\n";
    cout << "inches to centimeters (f)\n";
    cin >> input;
    double num;
    bool breakLoop = false;
    switch (input) {
    case 'q':
      breakLoop = true;
      break;
    case 'a':
      cout << "input meters: ";
      cin >> num;
      cout << metersToFeet(num) << endl;
      break;
    case 'b':
      cout << "input feet";
      cin >> num;
      cout << feetToMeters(num) << endl;
      break;
    case 'c':
      cout << "input fahrenheit";
      cin >> num;
      cout << fToC(num) << endl;
      break;
    case 'd':
      cout << "input celcius";
      cin >> num;
      cout << cToF(num) << endl;
      break;
    case 'e':
      cout << "input centimeters";
      cin >> num;
      cout << cmToIn(num) << endl;
      break;
    case 'f':
      cout << "input fahrenheit";
      cin >> num;
      cout << inToCm(num) << endl;
      break;
    default:
      cout << "invalid input";
      break;
    }
    if (breakLoop) {
      break;
    }
  }

  return 0;
}
