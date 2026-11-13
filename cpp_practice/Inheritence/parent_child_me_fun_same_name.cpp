// if parent member function and child member function are with same name then prefrence given to
// self class where the object is created (in this example child class).
#include <iostream>
using namespace std;

class parent
{
	protected: int data1, data2;
	public : void Input()
		 {
			cout<<"Enter the data1 and data2: "<<endl;
			cin>>data1>>data2;
		 }
		 void print()
		 {
			 cout<<"data1: "<<data1<<endl;
			 cout<<"data2: "<<data2<<endl;
		 }
};

class child : public parent
{
	int data3;
	public : void Add()
		 {
			 data3 = data1 + data2;
		 }
		 void print()
		 {
			 cout<<"data3: "<<data3<<endl;
		 }
};

int main()
{
	child obj;
	obj.Input();
	obj.Add();
	obj.print();
	obj.print();
}
