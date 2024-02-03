#include <iostream>

//* Static Polymorphism using Templates
template <typename T>
void print(const T& value) {
  std::cout << "Printing Values : " << value << std::endl;
}

//* Static Polymorphism using function overloading
void printd(int i) { std::cout << "Printing int : " << i << std::endl; }
void printd(double f) { std::cout << "Printing float : " << f << std::endl; }

void printd(const char* s) {
  std::cout << "Printing string : " << s << std::endl;
}
int main() {
  print(42);
  print(1.66666);
  print("Wo");

  printd(42);
  printd(1.66666);
  printd("Hello");
  return 0;
}