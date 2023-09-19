#include<iostream>
using namespace std;

class Construct{
public:
    float area;
    Construct(){
        area = 0;
    }

    Construct(int a, int b){
            area = a*b;
    }

    void disp(){
        cout<<area<<endl;
    }

};

int main()
{
    Construct obj1;
    Construct obj2(10,20);

    obj1.disp();
    obj2.disp();
    return 1;
}