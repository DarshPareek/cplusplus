#include <iostream>
#include <iterator>
#include <ostream>
#include <vector>

int main() {
  int arr[8] = {1, 2, 3, 6, 7, 8, 0, 10};
  std::vector<int> varr1(arr, arr + sizeof arr / sizeof arr[0]);
  std::vector<int> varr2(std::begin(arr), std::end(arr));
  for (auto it = std::begin(arr); it != std::end(arr); it++) {
    std::cout << *it << std::endl;
  }
  return 0;
}