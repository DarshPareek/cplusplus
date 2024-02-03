#include <iostream>

namespace animals {
std::string cat = "CAT";
std::string dog = "DOG";
namespace rodents {
std::string rabbit = "RABBIT";
}
}  // namespace animals

int main() {
  std::cout << animals::cat << std::endl;
  std::cout << animals::dog << std::endl;
  std::cout << animals::rodents::rabbit << std::endl;
  return 0;
}