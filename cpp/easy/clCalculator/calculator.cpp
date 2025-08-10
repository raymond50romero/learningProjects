#include <iostream>
#include <string>
using namespace std;

double doOperation(double left, double right, char operation) {
  switch (operation) {
  case '*':
    return left * right;
  case '/':
    return left / right;
  case '-':
    return left - right;
  default:
    return left + right;
  }
}

int main() {
  while (true) {
    string input;
    cout << "input basic math operation (+,-,*,/) (q to quit): ";
    cin >> input;

    if (input == "q" || input == "quit") {
      break;
    }

    string lhs;
    string rhs;
    bool lhsSet = false;
    bool rhsSet = false;
    char operation = ' ';
    for (int i = 0; i < input.length(); i++) {
      if (input[i] == '+' || input[i] == '-' || input[i] == '*' ||
          input[i] == '/') {
        operation = input[i];
        lhsSet = true;
      }
      if (!lhsSet) {
        lhs = input[i];
      } else if (!rhsSet) {
        rhs = input[i];
      }
    }
    double lhsConvert = stod(lhs);
    double rhsConvert = stod(rhs);
    double ans = doOperation(lhsConvert, rhsConvert, operation);
    cout << "answer: " << ans << '\n';
  }
  return 0;
}
