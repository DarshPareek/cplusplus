#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    float y = 10.10101;
    string z = "Ten";

    void *v_ptr;

    v_ptr = &x;
    cout << "int val : " << *(static_cast<int *>(v_ptr)) << endl;
    v_ptr = &y;
    cout << "float val : " << *(static_cast<float *>(v_ptr)) << endl;
    v_ptr = &z;
    cout << "string val : " << *(static_cast<string *>(v_ptr)) << endl;
    return 0;
}