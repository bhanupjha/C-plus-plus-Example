#include <iostream>
using namespace std;

class ABC
{
	int data1, data2;
	public : ABC()
		 {
			 cout<<"Enter the data1: "<<endl;
			 cin>>data1;
			 cout<<"Enter the data2: "<<endl;
			 cin>>data2;
		 }
		 void print()
		 {
			 cout<<"Data1: "<<data1<<endl;
			 cout<<"Data2: "<<data2<<endl;
		 }

		 friend void sum(ABC &);   // function as a friend of a class

};

void sum(ABC &ob)
{
	cout<<"Sum: "<<ob.data1 + ob.data2<<endl;
}

int main()
{
	ABC obj;
	obj.print();
	sum(obj);
}
