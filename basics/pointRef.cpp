#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}
int main()
{
    int (*fnptr)(int, int) = add; // Declaring a Function Pointer
    cout << fnptr(9, 9) << endl;

    int num = 10;
    int *ptr = &num;      // pointer to num
    cout << *ptr << endl; // accessing value using *ptr

    int &ref = num; // declaring a refrence
    ref = 95;
    cout << num << endl;
    return 0;
}