#include <iostream>
using namespace std;
#include <string.h>

class student
{
	char name[20];
	int id;
	float marks[5];
	char grade[5];
	float totalmarks, per;
	static int cnt;
	public: void Input()
		{
			id = ++cnt;

			cout<<"Enter the name: "<<endl;
			cin>>name;
			cout<<"Enter the marks: "<<endl;
			for(int i=0; i<5; i++)
			{
				cin>>marks[i];
			}
			totalmarks=per=0;
		}
		void caltotal()
		{
			for(int i=0; i<5; i++)
                        {
                                totalmarks+=marks[i];
                        }

		}
		void calper()
		{
			per=totalmarks/5;
		}
		void calgrade()
		{
			if(per>=90)
			{
				strcpy(grade, "A+");
			}
			else if(per>=80 && per<90)
			{
				strcpy(grade, "A");
			}
			else if(per>=60 && per<80)
			{
				strcpy(grade, "B");
			}
			else
			{
				strcpy(grade, "C");
			}
		}
		void print()
		{
			cout<<"Id: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Marks: ";
			for(int i=0; i<5; i++)
                        {
                                cout<<marks[i]<<" ";
                        }
			cout<<endl;
			cout<<"Total marks: "<<totalmarks<<endl;
			cout<<"Percentage: "<<per<<endl;
			cout<<"Grade: "<<grade<<endl;

		}

		// static member function
		static void Totalstu()
		{
			cout<<"Total students: "<<cnt<<endl;
		//	cout<<grade<<endl;   // static member fun cannot access the non static member of the class bcz 
		                             //  doesnot have this pointer.

		}
};

int student :: cnt;   // reference of static data member
int main()
{
	student :: Totalstu();   // reference to static member function
	student DB[5];
	for(int i=0; i<5; i++)
	{
		DB[i].Input();
		DB[i].caltotal();
		DB[i].calper();
		DB[i].calgrade();
	}
	for(int i=0; i<5; i++)
        {
       		DB[i].print();
        }
	student :: Totalstu();

}
