#include <iostream>
using namespace std;

class ABC
{
	int data1;
	const int data2;
	public : ABC(): data2(20)  
		 {
			 cout<<"Enter the data1: "<<endl;
			 cin>>data1;
		 }
		 ABC(int a, int b): data2(b)
		 {
			 data1=a;
		 }
		 ABC(ABC &ob): data2(ob.data2)
		 {
			 data1=ob.data1;
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
	ABC obj(10,50);
	obj.print();
	ABC obj1(56,78);
	obj1.inc();
	obj1.print();
	ABC obj2=obj1;
	obj2.print();
}
