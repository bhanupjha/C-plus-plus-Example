// refrence of const. var is possible with const ref var used.
#include <iostream>
using namespace std;

int main()
{
	const int x=12;
//	 int &r=x;   // not allowed
	const int &r=x;   // allowed
	cout<<"x="<<x<<endl;
}
