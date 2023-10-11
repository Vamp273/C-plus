#include <iostream>
using namespace std;
int main()
{
	double a = 3.143456789;
	double b = 2006.0;
	double c = 1.0e-10;
	
	cout.precision(5);
	
	cout <<"default\n";
	cout <<a << "\n"<<b<<"\n"<<c<<"\n";
	
	
	cout <<"\n";
	cout <<"fixed\n"<<fixed;
	cout<<a<<"\n"<<b<<"\n"<<"\n";
	
	cout<<"\n";
	
	cout<< "scientific:\n" <<scientific;
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
	
	return 0;
}
