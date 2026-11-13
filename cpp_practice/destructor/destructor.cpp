// compiler will supply default destructor when object is about to destroy

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
		 Array(int *p, int s)
		 {
			 size = s;
			 for(int i=0; i<size; i++)
			 {
				 ptr[i]=p[i];
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
		 ~Array()
		 {
			 cout<<"Destructor called"<<endl;
			 delete[]ptr;
		 }

};

int main()
{
	Array obj;  // when object is about to destroy destructor automatically invoked
		    // by compiler , internaly obj.~Array();
}
