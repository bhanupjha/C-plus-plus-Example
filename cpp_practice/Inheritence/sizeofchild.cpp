// sizeof(obj) -> sum of size of parent obj and size of data member in child class
#include <iostream>
using namespace std;

class parent
{
	protected:
		int data1, data2;
	public:
		void Input()
		{
			cout<<"Enter the data1 and data2:"<<endl;
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
	cout<<"Size of obj: "<<sizeof(obj)<<endl;  // 12 bytes
}
