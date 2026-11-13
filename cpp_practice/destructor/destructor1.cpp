// compiler will supply default destructor when object is about to destroy

#include <iostream>
using namespace std;

class Array
{
	int size;
	public:  Array()
		 {
			cout<<"Default constructor called"<<endl;
			cout<<"Enter the size: "<<endl;
			cin>>size;
			cout<<"Size: "<<size<<endl;
		 }
		 Array(int si)
		 {
			 size=si;
			 cout<<"Parametrized constructor called"<<endl;
			 cout<<"Size:"<<size<<endl;
		 }
		 Array(Array &s)
		 {
			size=s.size;
	         	cout<<"copy constructor called"<<endl;
			cout<<"Size: "<<size<<endl;
		 }
		 
		 ~Array()
		 {
			 cout<<"Destructor called"<<endl;
		 }

};

int main()
{
	Array obj;  
	Array obj1(10);
	Array obj2=obj;
}
