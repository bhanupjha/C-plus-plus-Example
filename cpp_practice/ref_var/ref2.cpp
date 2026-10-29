#include <iostream>
using namespace std;

int main()
{
	int x=20;
	int &r=x;  
	int &r2=x;

	cout<<"r="<<r<<endl;
	cout<<"r2="<<r2<<endl;
}
