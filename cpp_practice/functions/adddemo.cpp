#include <iostream>
using namespace std;

int Add(int, int);
int Add(int, int, int);
int Add(int, int, int, int, int);

int main()
{
	cout<<Add(10, 20)<<endl;
	cout<<Add(10, 20, 30)<<endl;
	cout<<Add(10, 20, 30, 40, 50)<<endl;
}

int Add(int a, int b)
{
	return a+b;
}

int Add(int a, int b, int c)
{
	return a+b+c;
}

int Add(int a, int b, int c, int d, int e)
{
	return a+b+c+d+e;
}
