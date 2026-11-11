#include <iostream>
using namespace std;

void foo(int, int &);

int main()
{
	int x=10, y=20;
	foo(x,y);
	cout<<x<<" "<<y<<endl;
}

void foo(int x, int &y)
{
	x++;
	y++;
}
