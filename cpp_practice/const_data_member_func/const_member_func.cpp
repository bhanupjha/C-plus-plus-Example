#include <iostream>
using namespace std;

class ABC
{
	int data1;
	int data2;
	public : ABC()
		 {
			 cout<<"Enter the data1  and data2: "<<endl;
			 cin>>data1>>data2;
		 }
		 void print()const
		 {
		//	 ++data2;  // error -> cannot modify
			 cout<<"Data1: "<<data1<<endl;
			 cout<<"Data2: "<<data2<<endl;
		 }
		 void inc()
		 {
			 ++data1;
			 ++data2;
		 }
};

int main()
{
	ABC obj;
	obj.print();
	obj.inc();
	obj.print();
}
