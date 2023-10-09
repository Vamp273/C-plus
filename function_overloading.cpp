#include<iostream>
using namespace std;

void sum(int, int);
void sum(double, double);
void sum(char, char);

void sum(int x, int y){
    cout<<"\n Sum of integers are : ";
};

void sum(double c, double d){
    cout<<"Sum of doubles is : ";
};

void sum(char e, char f){
    cout<<"Sum of chars are :  ";
};

int main()
{
    int a=10, b=20;
    double c=7.52, d=8.14;
    char e='a', f='b';
    sum(a, b);
    sum(c, d);
    sum(e, f);

    return 0;
}