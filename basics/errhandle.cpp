#include <exception>
#include <iostream>
#include <stdexcept>

int divide1(int a, int b) {
  if (b == 0) {
    throw "Division by Zero!!";
  }
  return a / b;
}

int divide2(int a, int b) {
  if (b == 0) {
    throw std::runtime_error("Division by Zero!!");
  }
  return a / b;
}

int main() {
  int n1, n2;
  std::cout << "Enter the Two numbers ";
  std::cin >> n1 >> n2;
  try {
    int res = divide1(n1, n2);
    std::cout << "Result " << res << std::endl;
  } catch (const char *msg) {
    std::cerr << "Error: " << msg << std::endl;
  }
  try {
    int res = divide2(n1, n2);
    std::cout << "Result " << res << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
  return 0;
}