#include <iostream>
using namespace std;

void foo(int, int &);

int main()
{
	int x=10, y=20;
	foo(y, x);
	cout<<x<<" "<<y<<endl;
}

void foo(int a, int &b)
{
	a=a+5;
	b=b+5;
}
