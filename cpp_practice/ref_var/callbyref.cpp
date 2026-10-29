#include <iostream>
using namespace std;
void Swap(int &p, int &q);
int main()
{
	int a=2, b=3;
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	Swap(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
}

void Swap(int &p, int &q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
}
