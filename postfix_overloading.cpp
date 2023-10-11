#include<iostream>
using namespace std;

class uf{
    int a;
    int b;
    int c;
    public:
    void getvalues()
    {
        cout << "Values of A, B & C";
        cin >> a>> b>> c;
    }
    void show(){
        cout <<a << b << c << endl;
    }

    void friend operator--(uf &x, int x1);
    
};

void operator--(uf &x, int y){
    x.a = x.a--;
    x.b = x.b--;
    x.c = x.c--;
}


int main(){
    uf x1;
    x1.getvalues();
    cout<<"Before overloading "<< endl;
    x1.show();
    cout <<"After overloading " << endl;
    operator--(x1, 1000);
    x1.show();
    return 0;

}