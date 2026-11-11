// "this" is a hidden pointer supplied by compiler in every member function except static
// data member inside the member function connected to calling object using "this"

#include <iostream>
using namespace std;

class ABC
{
	int data;
	public: void input()
		{
			cout<<"Enter the input: "<<endl;
			//cin>>data;
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

	obj1.input();
	obj2.input();

	obj1.print();
	obj2.print();
}
