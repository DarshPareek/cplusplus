#include <cstddef>
#include <iostream>
#include <ostream>

void modifyVariable(int *ptr) { *ptr = 42; }

class BaseClass {
 public:
  virtual void display() { std::cout << "BaseClass" << std::endl; }
};

class DerivedClass : public BaseClass {
 public:
  void display() { std::cout << "DerivedClass" << std::endl; }
};
int main() {
  //! STATIC CAST START
  enum Color { RED, GREEN, BLUE };
  int n = 1;
  Color col = GREEN;
  Color color = static_cast<Color>(n);
  int i = 42;
  double f = static_cast<double>(i);
  std::cout << n << " " << color << " " << col << " " << f << std::endl;
  //! STATIC CAST END (FOR CHANGING BASIC TYPES OF VARIABLES)

  //? CONST CAST START
  const int ogVal = 2;
  int *non_const_value_ptr = const_cast<int *>(&ogVal);
  std::cout << "Original Value: " << ogVal << std::endl;
  modifyVariable(non_const_value_ptr);
  std::cout << "Modified Value: " << *non_const_value_ptr << std::endl;
  //? CONST CAST END (FOR ADDING AND REMOVING CONSTNESS OF A VARIABLE)

  //* DYNAMIC CAST START
  BaseClass *basePtr = new DerivedClass();  // Up Casting
  DerivedClass *derivedPtr;
  derivedPtr = dynamic_cast<DerivedClass *>(basePtr);  // Down Casting
  derivedPtr->display();
  // basePtr->display();
  delete basePtr;
  //* DYNAMIC CAST END (USED FOR POLYMORPHISM)

  // todo REINTERPRET CAST START
  int num = 42;
  int *num_ptr = &num;
  char *char_ptr = reinterpret_cast<char *>(num_ptr);
  for (size_t i = 0; i < sizeof(int); i++) {
    std::cout << "Byte " << i << ": " << char_ptr[i] << std::endl;
  }
  // todo REINTERPRET CAST END (USE WHEN CASTING TOO LOW_LEVEL FOR STATIC CAST)
  return 0;
}