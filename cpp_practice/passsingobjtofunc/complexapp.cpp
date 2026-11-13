#include <iostream>
using namespace std;
#include "complex.h"
#include "complex.cpp"

int main()
{
	complex e1(10,20), e2(67,89);
	complex e3, e4;
	e3 = e1.Add(e2);
	e4 = e2.sub(e1);
	e1.print();
	e2.print();
	e3.print();
	e4.print();
}
