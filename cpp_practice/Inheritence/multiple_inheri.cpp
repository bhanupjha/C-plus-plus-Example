#include <iostream>
using namespace std;

#include "Address.cpp"
#include "Date_of_birth.cpp"
#include "person.cpp"

int main()
{
	person pobj;
	pobj.printinfo();
	pobj.getdob();
	pobj.printAddress();
}
