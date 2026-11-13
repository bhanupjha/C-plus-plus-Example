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
		Array(int *p, int s)
		{
			cout<<"Parametrized constructor"<<endl;
			size = s;
			ptr = new int[size];
			for(int i=0; i<size; i++)
                        {
                                ptr[i]=p[i];
                        }

		}
		Array(Array &obj)
		{
			cout<<"Copy constructor"<<endl;
			size=obj.size;
			ptr = new int[size];
			for(int i=0; i<size; i++)
                        {
                                ptr[i]=obj.ptr[i];
                        }

		}
		void reverse()
		{
			for(int i=0, j=size-1; i<j; i++,j--)
			{
				int temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
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
			delete[]ptr;
		}

};

void Foo(Array &o)  // collecting through call by refrence   -> obj - Array &obj  , obj is reference to original obj.
{
	o.reverse();  // no destructor call bcz it is refrence to original obj
}

int main()
{
	Array obj;
	obj.print();

	Foo(obj);   // copy constructor called
	obj.print();  // it will reverse 
}
