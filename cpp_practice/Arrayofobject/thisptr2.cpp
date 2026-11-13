
#include <iostream>
using namespace std;

class ABC
{
	int data;
	public: void input(int data)
		{
			this->data=data;  // calling object data is changed bcz this referring to calling object
		}

		void input1(int data)
		{
			data = data;   // calling object data will not changed  
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
	ABC obj3;
	obj1.input(10);
	obj2.input(20);

	obj1.print();
	obj2.print();

	obj3.input1(50);
	obj3.print();
}
