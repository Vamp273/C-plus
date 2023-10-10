#include<iostream>
using namespace std;

int main()
{
    int val=169;
    int *ptr = &val;
    int **double_ptr = &ptr;

    cout << val << endl;
    cout << ptr << endl;
    cout << double_ptr;

    return 0;
}