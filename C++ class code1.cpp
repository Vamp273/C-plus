#include<iostream>
using namespace std;

class Student
{
    int id;
    char name[20];
    
    public:
    void readdata();
};

void Student:: readdata(){
    
    cout<<"Enter your name and id : ";
    cin>>name>>id;
    cout<<"name = "<<name<<endl;
    cout<<"id = "<<id<<endl;
}


int main()
{
    Student s;
    s.readdata();
    return 0;
}
