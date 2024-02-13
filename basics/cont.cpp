#include <iostream>
#include <list>
#include <map>
#include <ostream>
#include <unordered_map>
#include <vector>

int main() {
  //* VECTORS
  std::vector<int> vec = {1, 2, 3, 4, 5};
  vec.push_back(6);
  std::cout << "Vector Items :";
  for (int x : vec) {
    std::cout << " " << x;
  }
  std::cout << std::endl;
  //* VECTORS

  //* LISTS (DOUBLY LINKED)
  std::list<int> lst = {1, 2, 3, 4, 5};

  lst.push_back(6);
  std::cout << "List contains:";
  for (int x : lst) {
    std::cout << ' ' << x;
  }
  std::cout << std::endl;
  //* LISTS (DOUBLY LINKED)

  //* MAP
  std::map<std::string, int> m;

  m["one"] = 1;
  m["two"] = 2;

  std::cout << "Map contains:" << std::endl;
  for (const auto &pair : m) {
    std::cout << pair.first << ": " << pair.second << std::endl;
  }
  //* MAP

  //* MAP UNORDERED
  std::unordered_map<std::string, int> um;

  um["one"] = 1;
  um["two"] = 2;

  std::cout << "Unordered map contains:" << std::endl;
  for (const auto &pair : um) {
    std::cout << pair.first << ": " << pair.second << std::endl;
  }
  //* MAP UNORDERED
  return 0;
}