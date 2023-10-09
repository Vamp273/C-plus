#include<iostream>
using namespace std;

int Sum(int x = 25, int y = 15, int z = 35)
{
    return (x+y+z);
}

int main()
{
    cout << "SUM = " << Sum(10, 13, 45) << endl;
    cout << "SUM = " << Sum(10, 45) << endl;
    cout << "SUM = " << Sum(10) << endl;
    cout << "SUM = " << Sum() << endl;

    return 0;
}