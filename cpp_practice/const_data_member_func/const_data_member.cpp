#include <iostream>
using namespace std;

class ABC
{
	int data1;
	const int data2;
	public : ABC(): data2(20)  // constant data member intialization
		 {
			 cout<<"Enter the data1: "<<endl;
			 cin>>data1;
		 }
		 void print()
		 {
			 cout<<"Data1: "<<data1<<endl;
			 cout<<"Data2: "<<data2<<endl;
		 }
		 void inc()
		 {
			 ++data1;

		 }
};

int main()
{
	ABC obj;
	obj.print();
	obj.inc();
	obj.print();
}
