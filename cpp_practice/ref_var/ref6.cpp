#include <iostream>
using namespace std;

int main()
{
	int x=20;
	int *p;
	p=&x;

	int &r=*p;

	cout<<"x:"<<x<<endl;
        cout<<"r:"<<x<<endl;
        cout<<"*p:"<<x<<endl;

	r=80;

        cout<<"x:"<<x<<endl;
        cout<<"r:"<<x<<endl;
        cout<<"*p:"<<x<<endl;
}
