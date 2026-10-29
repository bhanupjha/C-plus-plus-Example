#include <iostream>
using namespace std;
int data=10;
int main()
{
	int data=34;
	cout<<data<<"\n";  // local variable
	cout<<::data<<"\n"; // global variable

}
