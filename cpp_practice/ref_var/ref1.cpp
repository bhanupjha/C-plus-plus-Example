// reference variable refer to only single existing variable in its life time
// This programm throw an error
#include <iostream>
using namespace std;

int main()
{
	int x=20, y=30;
	int &r=x;  // referring to xvariable
	&r=y;  // referring to y variable is not possible
}
