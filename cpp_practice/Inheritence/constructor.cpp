// when a child obj created by default compiler call child parametrized constructor
// to call parent parametrized constructor we have to inform compiler in child  parametrized constructor
#include <iostream>
using namespace std;

class parent
{
	protected:
		int data1;
	public:
		parent()
		{
			cout<<"parent cons:"<<endl;
			cout<<"Enter the data1: "<<endl;
			cin>>data1;
		}
		parent(int d)
		{
			cout<<"parent para constructor: "<<endl;
			data1 = d;
		}
		~parent()
		{
			cout<<"parent dest: "<<endl;
		}
		void print()
		{
			cout<<"data1: "<<data1<<endl;
		}
};

class child : public parent
{
	int data2;
	public : child()
		 {
			 cout<<"child constructor: "<<endl;
			 cout<<"Enter the data2: "<<endl;
			 cin>>data2;
		 }
		 // inform to compiler to call parametrized constr
		 child(int a,int b): parent(a)
		 {
			 cout<<"child para const: "<<endl;
			 data2=b;
		 }
		 ~child()
		 {
			 cout<<"child destructor: "<<endl;
		 }
		 void print()
		 {
			 cout<<"data2: "<<data2<<endl;
		 }
};

int main()
{
	child cobj(10, 20);
	cobj.parent :: print();  // to call parent print() if same name in parent and child
	cobj.print();
}
