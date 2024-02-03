#include <iostream>
// #include <string>

//* A normal C++ class

class Dog {
 public:
  std::string name;
  int age;

  void bark() { std::cout << name << " barks!" << std::endl; }
};

//* A class with encapsulation
class Horse {
 private:
  std::string name;
  int age;

 public:
  void setName(std::string n) { name = n; }
  void setAge(int a) { age = a; }
  void mSound() { std::cout << name << " makes a noise!!!" << std::endl; }
};

//* A class that uses inheritance
class Breed : public Dog {
 public:
  void tellBreed() { std::cout << name << " is a Pug!!" << std::endl; }
};

//* A class that uses polymorphism
class Bird {
 public:
  virtual void makeSound() { std::cout << "Bird Makes a Sound" << std::endl; }
};

class Sparrow : public Bird {
 public:
  void makeSound() {
    std::cout << "Sparrow makes a chirping sound" << std::endl;
  }
};

class Owl : public Bird {
 public:
  void makeSound() { std::cout << "Owl makes a hooting sound" << std::endl; }
};

int main() {
  Dog myDog;
  myDog.name = "Oreo";
  myDog.age = 3;
  myDog.bark();  //? Method usage

  Horse myHorse;
  myHorse.setAge(11);
  myHorse.setName("Speedo");
  myHorse.mSound();

  Breed myPug;
  myPug.name = "Rocky";
  myPug.bark();
  myPug.tellBreed();

  Bird *birds[3] = {new Bird, new Sparrow, new Owl};
  birds[0]->makeSound();
  birds[1]->makeSound();
  birds[2]->makeSound();

  return 0;
}
