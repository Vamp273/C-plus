#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr;
    ptr = &x;
    cout << ptr <<endl;
    ptr = ptr + 1;
    cout << x << endl;
    cout << ptr;

    return 0;
}