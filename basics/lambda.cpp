#include <iostream>

using namespace std;

int main()
{
    auto prenum = []()
    {
        cout << 4 << endl;
    };
    prenum();
    auto ginum = [](int a)
    {
        cout << a << endl;
    };
    ginum(7);
    int m = 3;
    auto times = [m](int a)
    {
        cout << a * m << endl;
    };
    times(7);
    int ch = 5;
    auto change = [&ch](int by)
    {
        ch = by;
    };
    cout << ch << endl;
    change(10);
    cout << ch << endl;
    return 0;
}