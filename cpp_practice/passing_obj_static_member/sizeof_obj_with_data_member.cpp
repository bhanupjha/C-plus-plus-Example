// size of obj with data member
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

int ABC :: c;

int main()
{
	ABC obj1;
	cout<<"Size of obj with data member: "<<sizeof(obj1)<<endl;
}
