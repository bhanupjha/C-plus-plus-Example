#include <iostream>
using namespace std;

void Print(int a, double b)
{
	cout<<a<<" "<<b<<endl;
}
void Print(double a, int b)
{
	cout<<a<<" "<<b<<endl;
}
int main()
{
	Print(10, 12.35);
	Print(1.34, 20);
}
