// there is no global var it will throw an error
#include <iostream>
using namespace std;

int main()
{
	int data=34;
	cout<<data<<"\n";  // local variable
	{
		int data=25;
		cout<<data<<"\n"; // inner block data 25
		cout<<::data<<"\n"; // global var
	}

}
