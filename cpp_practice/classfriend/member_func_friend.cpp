#include <iostream>
using namespace std;

class xyz; // forward declaration

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
		 void Add(xyz);    
};

class xyz
{
	int data3;
	public: xyz()
		{
			cout<<"Enter the data3: "<<endl;
			cin>>data3;
		}
		void print()
		{
			cout<<"Data3: "<<data3<<endl;
		}
		// making Add member function of ABC class friend to XYZ class
		friend void ABC :: Add(xyz); 
};

void ABC :: Add(xyz ob)
{
	cout<<"sum: "<<data1+data2+ob.data3<<endl;
}

int main()
{
	ABC obj;
	xyz obj1;
	obj.Add(obj1);
}
