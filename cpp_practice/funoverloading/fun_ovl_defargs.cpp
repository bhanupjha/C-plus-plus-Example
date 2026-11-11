
// if we are using default args don't create ambiguity -> compiler unable to understand which function definition
// to map their call
#include <iostream>
using namespace std;

//int Add(int, int);  // ambiguity
int Add(float, int);
float Add(int, float);
int Add(int, int, int=0); // both function are same

int main()
{
	cout<<Add(10,20)<<endl;
	cout<<Add(15.7f, 27)<<endl;
	cout<<Add(10, 2.5f)<<endl;
	cout<<Add(10, 20, 30)<<endl;
}

/*int Add(int a, int b)
{
	return a+b;
}*/

int Add(float a, int b)
{
	return a+b;
}
float Add(int a, float b)
{
	return a+b;
}
int Add(int a, int b, int c)
{
	return a+b+c;
}
