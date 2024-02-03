// Manual Memory management in C++
#include <iostream>
// #include <memory>

using namespace std;

int main() {
  int *ptr = new int;
  *ptr = 15;

  cout << "Value in ptr " << *ptr << endl;

  delete ptr;

  int *pt = new int[10];  // creates an array

  for (int i = 0; i < 10; i++) {
    pt[i] = i;
  }

  delete[] pt;  // deletes whole array by deleting the pointer
  // IF DELETE IS MISSING THERE WILL BE A MEMORY LEAK

  return 0;
}