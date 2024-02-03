#include <iostream>

using namespace std;

struct Employee {
  /* data */
  int no;
  int age;
  string name;
};

class Student {
  int roll_no;
  std::string name;
  float marks;

 public:
  void set_data(int r, std::string n, float m) {
    roll_no = r;
    name = n;
    marks = m;
  }

  void display() {
    std::cout << "Roll no: " << roll_no << "\nName: " << name
              << "\nMarks: " << marks << std::endl;
  }
};

Student s1;

int main() {
  Employee e1;
  e1.age = 1;
  e1.name = "John Doe";
  e1.no = 40000;

  cout << e1.age << " " << e1.name << " " << e1.no << endl;

  s1.set_data(1, "Alice", 95.7);
  s1.display();

  return 0;
}