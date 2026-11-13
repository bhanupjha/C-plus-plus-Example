#include <iostream>
using namespace std;

class Array
{
	int size;
	int *ptr;
	public: Array()
		{
			cout<<"Default constructor: "<<endl;
			cout<<"Enter the size: "<<endl;
			cin>>size;
			ptr = new int[size];
			cout<<"Enter the elements: "<<endl;
			for(int i=0; i<size; i++)
			{
				cin>>ptr[i];
			}
		}
		void print()
		{
			for(int i=0; i<size; i++)
                        {
                                cout<<ptr[i]<<" ";
                        }
			cout<<endl;

		}
		~Array()
		{
			cout<<"Destructor called"<<endl;
		}

};

void Foo()
{
	Array obj;
	obj.print();
}

int main()
{
	for(int i=0; i<3; i++)
	{
		Foo();
	}
}
