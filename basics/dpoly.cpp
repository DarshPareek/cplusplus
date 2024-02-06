#include <iostream>

class Shape {
 public:
  virtual void draw() { std::cout << "Drawing a Shape" << std::endl; }
};

class Circle : public Shape {
 public:
  void draw() { std::cout << "Drawing a Circle" << std::endl; }
};

class Rectangle : public Shape {
 public:
  void draw() { std::cout << "Drawing a Rectangle" << std::endl; }
};

int main() {
  Shape s, *shape;
  Rectangle r;
  Circle c;
  s.draw();       //? Prints abt shape
  shape->draw();  //! Does Nothing
  shape = &r;
  shape->draw();
  shape = &c;
  shape->draw();
  r.draw();  //? Prints abt shape
  c.draw();  //? Prints abt shape
  return 0;
}