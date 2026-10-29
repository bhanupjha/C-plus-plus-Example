#include <iostream>
using namespace std;

int main()
{
	int x=20;
	int &r=x;  
	
	r=50;

	cout<<"x="<<x<<endl;
}
