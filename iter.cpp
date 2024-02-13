#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  //! INPUT ITERATOR
  int nums[8] = {1, 2, 3, 4};
  int b;
  std::istream_iterator<int> input(std::cin);
  nums[4] = *input;
  for (int i = 4; i != sizeof(nums) / sizeof(int) - 1; i++) {
    input++;
    nums[i + 1] = *input;
    // std::cout << i << std::endl;
  }
  //   std::copy(input, std::istream_iterator<int>(), nums);
  //* CODE FO MAKING A VECTOR TO A STRING
  //   std::ostringstream oss;
  //   if (sizeof(nums) / sizeof(int) == 0) {
  //     std::copy(std::begin(nums), std::end(nums) - 1,
  //               std::ostream_iterator<int>(oss, ", "));
  //     oss << nums.back();
  //   }
  std::ostream_iterator<int> outputs(std::cout, ", ");
  std::copy(std::begin(nums), std::end(nums), outputs);
  std::cout << std::endl;
  //   std::cout << nums[sizeof(nums) / sizeof(int) - 1] << std::endl;
  //* CODE FO MAKING A VECTOR TO A STRING

  //! OUTPUT ITERATOR
  std::vector<int> vec = {1, 2, 3, 400, 500};
  std::vector<int> v2 = {9, 10, 11, 12};
  std::ostream_iterator<int> output(std::cout, ", ");
  std::copy(vec.begin(), vec.end(), output);
  return 0;
}