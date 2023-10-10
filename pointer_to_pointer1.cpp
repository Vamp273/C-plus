#include<iostream>
using namespace std;

int main()
{
    int a  = 10;
    int *p;
    int **pp;
    p = &a;
    pp = &p;
    cout << "address of a : " << p << endl;
    cout<<"Value stored at p : " << *p<<endl;
    cout << "Value stored at a : " << **pp << endl;

    return 0;
}