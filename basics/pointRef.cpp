#include <iostream>
#include <memory>

using namespace std;

int add(int a, int b) { return a + b; }

class MyClass {
 public:
  MyClass() { std::cout << "Constructor is called." << std::endl; }
  ~MyClass() { std::cout << "Destructor is called." << std::endl; }
};

class MyClass1 {
 public:
  void DoSomething() { std::cout << "Doing something...\n"; }
};

int main() {
  struct MyDeleter {
    void operator()(int *ptr) {
      std::cout << "Custom Deleter: Deleting pointer" << std::endl;
      delete ptr;
    }
  };
  int (*fnptr)(int, int) = add;  // Declaring a Function Pointer
  cout << fnptr(9, 9) << endl;

  int num = 10;
  int *ptr = &num;       // pointer to num
  cout << *ptr << endl;  // accessing value using *ptr

  int &ref = num;  // declaring a reference
  ref = 95;
  cout << num << endl;

  // unique pointers (Two ways to initialize)
  unique_ptr<int, MyDeleter> p1(new int(5), MyDeleter());
  unique_ptr<int> p2 = make_unique<int>(10);

  cout << *p1 << ", " << *p2 << endl;

  // // transferring the ownership
  unique_ptr<int, MyDeleter> p3 = std::move(p1);

  cout << *p2 << ", " << *p3 << endl;

  // shared_pointer
  shared_ptr<MyClass> ptr1(new MyClass());
  {
    // create another shared pointer and initialize it with the previously
    // created pointer
    shared_ptr<MyClass> ptr2 = ptr1;

    cout << "Inside the inner scope." << endl;
    cout << "Shared uses count: " << ptr2.use_count() << '\n';
    // both pointers share the same object, and the reference counter has been
    // increased to 2
  }
  cout << "Outside the inner scope." << endl;

  std::weak_ptr<MyClass1> weak;

  {
    std::shared_ptr<MyClass1> shared = std::make_shared<MyClass1>();
    weak = shared;

    if (auto sharedFromWeak = weak.lock()) {
      sharedFromWeak->DoSomething();  // Safely use the object
      std::cout << "Shared uses count: " << sharedFromWeak.use_count()
                << '\n';  // 2
    }
  }

  // shared goes out of scope and the MyClass object is destroyed

  if (auto sharedFromWeak = weak.lock()) {
    // This block will not be executed because the object is destroyed
  } else {
    std::cout << "Object has been destroyed\n";
  }

  return 0;

  return 0;
}