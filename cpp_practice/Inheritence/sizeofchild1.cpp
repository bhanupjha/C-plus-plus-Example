// sizeof(obj) -> sum of size of parent obj and size of data member in child class
// in child class protected and public data member and member function inherited but when we calculate size of obj include parent
// private data member also.
#include <iostream>
using namespace std;

class parent
{
	int data;         // created one private member
	protected:
		int data1, data2;
	public:
		void Input()
		{
			cout<<"Enter the data1 and data2:"<<endl;
			cin>>data1>>data2;
			cout<<"Enter the data: "<<endl;
			cin>>data;
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
	public:
		void Add()
		{
			data3=data1+data2;
		}
		void printd()
		{
			cout<<"data3: "<<data3<<endl;
		}
};

int main()
{
	child obj;
	cout<<"Size of obj: "<<sizeof(obj)<<endl;  // 16 bytes  
}
