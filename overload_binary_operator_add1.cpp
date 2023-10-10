#include<iostream>
using namespace std;

class complex{
    int x, y;
    public:
    complex(){
        x = 10;
        y = 20;
    }

    complex(int a, int b){
        x = a;
        y = b;
    }

    friend complex operator +(complex c1, complex c2);

    void show(){ // Corrected the function name from shor() to show()
        cout<<x<<"+"<<y<<"i";
    }
};

complex operator +(complex c1, complex c2){
    complex temp;
    temp.x = c1.x + c2.x;
    temp.y = c1.y + c2.y; // Corrected this line to add c1.y and c2.y
    return temp;
}

int main(){
    complex C1(2,3), C2(4,5), C3;
    C3 = C1 + C2;
    C3.show();
    return 0;
}

