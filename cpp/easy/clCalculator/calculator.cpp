#include <cctype>
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
    bool isAlpha = false;
    char operation = ' ';
    for (int i = 0; i < input.length(); i++) {
      if (isalpha(input[i])) {
        cout << "invalid input" << '\n';
        isAlpha = true;
        break;
      }
      if (input[i] == '+' || input[i] == '-' || input[i] == '*' ||
          input[i] == '/') {
        operation = input[i];
        lhsSet = true;
        i++;
      }
      if (!lhsSet) {
        lhs = lhs + input[i];
      } else if (!rhsSet) {
        rhs = rhs + input[i];
      }
    }
    cout << "this is lhs: " << lhs << '\n';
    cout << "this is rhs: " << rhs << '\n';
    if (!isAlpha) {
      double lhsConvert = stod(lhs);
      double rhsConvert = stod(rhs);
      double ans = doOperation(lhsConvert, rhsConvert, operation);
      cout << "answer: " << ans << '\n';
    }
  }
  return 0;
}
