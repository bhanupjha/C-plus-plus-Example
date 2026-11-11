#include <iostream>
using namespace std;

void Print(int a, double b)
{
	cout<<a<<" "<<b<<endl;
}

void Print(int a, char b)
{
	cout<<a<<" "<<b<<endl;
}

int main()
{
	Print(10, 12.34);
	Print(10, 'A');
}
