// how much object is created
#include <iostream>
using namespace std;

class ABC
{
	int a, b;
	static int c;
	public :
	ABC()
	{
		cout<<"Enter the a and b: "<<endl;
		cin>>a>>b;
		c++;
	}
	ABC(int x, int y)
	{
		a=x;
		b=y;
		c++;
	}
	ABC(ABC &obj)
	{
		a = obj.a;
		b = obj.b;
		c++;
	}
	void print()
	{
		cout<<"No.of object created till now: "<<c<<endl;
		cout<<"a: "<<a<<endl;
		cout<<"b: "<<b<<endl;
	}
};

int ABC :: c;     // reference to static data member

void foo()
{
	ABC obj;
	obj.print();
}

int main()
{
	ABC obj1;
	obj1.print();
	ABC obj2(56, 78);
	obj2.print();
	
	foo();
	ABC obj3=obj2;
	obj3.print();
	obj1.print();
}
