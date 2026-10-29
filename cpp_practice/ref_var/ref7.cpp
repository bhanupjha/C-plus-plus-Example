#include <iostream>
using namespace std;

int main()
{
	int x=20;
	int *p=&x;  // assigned address of x to pointer variable
	int* &r=p;  // creating reference pointer of pointer variable

	cout<<"x:"<<x<<endl;
        cout<<"*p:"<<*p<<endl;
        cout<<"*r:"<<*r<<endl;

        cout<<"address of x:"<<&x<<endl;
        cout<<"p:"<<p<<endl;
        cout<<"r:"<<r<<endl;
}
