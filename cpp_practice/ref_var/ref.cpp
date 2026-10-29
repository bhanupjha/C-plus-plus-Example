#include <iostream>
using namespace std;
int main()
{
	int x=10;
	int &r=x;
	cout<<"x:"<<x<<endl;
	cout<<"r:"<<r<<endl;

	cout<<"address of x:"<<&x<<endl;
	cout<<"address of r:"<<&r<<endl;
}
