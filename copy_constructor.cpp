//copy constructor

#include<iostream>
using namespace std;

class counter {
private:
    int c;

public:
    counter(int a) {
        c = a;
    }

    counter(const counter &ob) { // Added 'const' to the copy constructor
        cout << "Copy constructor invoked" << endl; // Added endl to the output
        c = ob.c;
    }

    void show() { 
        cout << c << endl;
    }
};

int main() {
    counter C1(10);
    counter C2(C1);

    C1.show();
    C2.show();

    return 0; // Added return statement to the main function
}
