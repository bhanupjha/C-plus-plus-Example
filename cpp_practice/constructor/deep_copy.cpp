// To avoid shallow copy we can define our own copy constructor with deep copy.

#include <iostream>
using namespace std;

class Array
{
	int *ptr;
	int size;
	public:  Array()
		 {
			 cout<<"Default constructor"<<endl;
			 cout<<"Enter the size: "<<endl;
			 cin>>size;
			 ptr=new int[size];
			 cout<<"Enter the elements:"<<endl;
			 for(int i=0; i<size; i++)
			 {
				 cin>>ptr[i];
			 }
		 }
		 Array(Array &obj)
		 {
			 size=obj.size;
			 ptr = new int[size];
			 for(int i=0; i<size; i++)
			 {
				 ptr[i]=obj.ptr[i];
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
		 void reverse()
		 {
			cout<<"After reverse:"<<endl;
			for(int i=0, j=size-1; i<j; i++, j--)
			{
				int temp;
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		 }
		 void sort()
		 {
			 cout<<"After sort:"<<endl;
			 for(int i=1; i<size; i++)
			 {
				 for(int j=0; j<size-i; j++)
				 {
					 if(ptr[j]>ptr[j+1])
					 {
						 int temp=ptr[j];
						 ptr[j]=ptr[j+1];
						 ptr[j+1]=temp;
					 }
				 } 
			 }
		 }

};

int main()
{
	Array obj;
	cout<<"obj: "<<endl;
	obj.print();
	obj.reverse();
	cout<<"obj after reverse: "<<endl;
	obj.print();
	obj.sort();
	cout<<"obj after sort: "<<endl;
	obj.print();

	Array obj2=obj;
	cout<<"obj2: "<<endl;
	obj2.print();
	obj2.reverse();
	cout<<"obj2 after reverse: "<<endl;
	obj2.print();
	cout<<"printing previous obj Reverse value:"<<endl;
	obj.print();  // observe that it is also modified
}
