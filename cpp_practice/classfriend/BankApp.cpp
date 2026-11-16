#include <iostream>
using namespace std;
class SBI; // forward declaration
#include "hdfc.h"
#include "sbi.h"
#include "hdfc.cpp"
#include "sbi.cpp"


int main()
{
	SBI sobj;
	HDFC Hobj;
	Hobj.BalEnq();
	sobj.BalEnq();
	if(sobj.Transaction(Hobj))
	{
		cout<<"Transaction successfull"<<endl;
	}
	else
	{
		cout<<"Tranasaction Failed"<<endl;
	}
	Hobj.BalEnq();
	sobj.BalEnq();
}
