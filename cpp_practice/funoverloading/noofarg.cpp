// changing return type is not comes under function overloading it throw an error redeclaration or old declaration match
// function overloading -> type of args,, order of args, no.of args
#include <iostream>
using namespace std;

int sum(int a, int b)
{
	return a+b;
}	

void sum(int a, int b)
{
	cout<<a+b<<endl;
}

int main()
{
	cout<<sum(1,2)<<endl;
	sum(5,5);
}
