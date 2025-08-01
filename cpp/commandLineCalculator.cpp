#include <cctype>
#include <iostream>

int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }

int multiply(int a, int b) { return a * b; }

double divide(float a, float b) { return a / b; }

int main() {
  int firstNum = 0;
  int secondNum = 0;
  char userInput = ' ';
  std::cout << "What operation would you like to do?\n";
  std::cout << "A: add\n";
  std::cout << "B: subtract\n";
  std::cout << "C: multiply\n";
  std::cout << "D: divide\n";
  std::cin >> userInput;
  std::cout << "input first number: ";
  std::cin >> firstNum;
  std::cout << "input second number: ";
  std::cin >> secondNum;
  userInput = std::tolower(userInput);

  std::cout << "\n";
  if (userInput == 'a') {
    std::cout << add(firstNum, secondNum) << "\n";
  } else if (userInput == 'b') {
    std::cout << subtract(firstNum, secondNum) << "\n";
  } else if (userInput == 'c') {
    std::cout << multiply(firstNum, secondNum) << "\n";
  } else {
    std::cout << divide(firstNum, secondNum) << "\n";
  }
}

std::string getOperations() {
  return "Select Operation\n A: add\n B: subtract\n C: multiply\n D: divide\n";
}
