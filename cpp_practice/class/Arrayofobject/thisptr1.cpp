
#include <iostream>
using namespace std;

class ABC
{
	int data;
	public: void input()
		{
			cout<<"Address of this pointer: "<<this<<endl;
			cout<<"Enter the data: "<<endl;
			cin>>this->data;
		}

		void print()
		{
			cout<<"Output: "<<endl;
			//cout<<data<<endl;
			cout<<this->data<<endl;
		}
};

int main()
{
	ABC obj1;
	ABC obj2;

	cout<<"Address of obj1: "<<&obj1<<endl;
	obj1.input();

	cout<<"Address of obj2: "<<&obj2<<endl;
	obj2.input();

	obj1.print();
	obj2.print();
}
