#include <iostream>

using namespace std;

int main()
{
    int c, x;
    cout << "Enter amount of iterations : ";
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cout << "Iteration " << i + 1 << endl;
    }
    //---------------------------------------------------------------------------
    x = 0;
    while (x < c)
    {
        cout << "Iteration " << x + 1 << endl;
        x++;
    }

    return 0;
}