// when child is inherits duplicate copies of member from a common grand parent class through 
// multiple path (diamond problem)  then ambiguity problem came.
// to avoid it make base class as virtual
#include <iostream>
using namespace std;

#include "student.cpp"
#include "ece.cpp"
#include "sports.cpp"
#include "result.cpp"

int main()
{
	result robj;
	robj.caltotalmarks();
	robj.calper();
	robj.calgrade();
	robj.rprint();
}
