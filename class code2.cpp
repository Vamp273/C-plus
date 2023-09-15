#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        void printname(){
            cout<<"Name is : ";
        }
};

int main(){
    
    Student object1;
    string name;
    object1.printname();
    cout<< name <<endl;
    
    return 0;
}
