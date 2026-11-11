#include <iostream>
using namespace std;

int Add(int, int, int=0, int=0, int=0);

int main()
{
	cout<<Add(10, 20)<<endl;
	cout<<Add(10, 20, 30)<<endl;
	cout<<Add(10, 20, 30, 40)<<endl;
	cout<<Add(10, 20, 30, 40, 50)<<endl;
}

int Add(int a, int b, int c, int d, int e)
{
	return a+b+c+d+e;
}
