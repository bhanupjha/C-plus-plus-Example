#include <iostream>
using namespace std;

typedef struct Address
{
	char city[20];
	char state[20];
}Addr;

typedef struct DOB
{
        int day;
	int month;
	int year;
}DOB;

class person
{
	protected :
		char name[20];
		int age;
		Addr address;
		DOB d;
	public : person()
		 {
			 cout<<"person constructor"<<endl;
			 cout<<"Enter the name: "<<endl;
			 cin>>name;
			 cout<<"Enter the age: "<<endl;
			 cin>>age;
			 cout<<"Enter the Address"<<endl;
			 cout<<"Enter the city: "<<endl;
			 cin>>address.city;
			 cout<<"Enter the state: "<<endl;
			 cin>>address.state;
			 cout<<"Enter the DOB: "<<endl;
			 cin>>d.day>>d.month>>d.year;
		 }
		 void print()
		 {
			 cout<<"Name: "<<name<<endl;
			 cout<<"Age: "<<age<<endl;
			 cout<<"State: "<<address.state<<endl;
			 cout<<"City: "<<address.city<<endl;
			 cout<<"DOB: "<<d.day<<"-"<<d.month<<"-"<<d.year<<endl;
		 }
		 ~person()
		 {
			 cout<<"person destructor"<<endl;
		 }

};
