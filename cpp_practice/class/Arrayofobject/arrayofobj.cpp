#include <iostream>
using namespace std;

class student
{
	int id, total=0, per=0;
	char name[20];
	int marks[5];
	public: void input()
		{
			cout<<"Enter the id: "<<endl;
			cin>>id;
			cout<<"Enter the name: "<<endl;
			cin>>name;
			cout<<"Enter the Marks: "<<endl;
			for(int i=0; i<5; i++)
			{
				cin>>marks[i];
			}
		}
		void calTot()
		{
			for(int i=0; i<5; i++)
			{
				total += marks[i];
			}
		}
		void calper()
		{
			per = total/5;
		}
		void print()
		{
			cout<<"id: "<<id<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"Marks: ";
			for(int i=0; i<5; i++)
			{
				cout<<marks[i]<<" ";
			}
			cout<<endl;
			cout<<"Total: "<<total<<endl;
			cout<<"Percentage: "<<per<<endl;
		}

};


int main()
{
	student sobj[5];
	for(int i=0; i<5; i++)
	{
		sobj[i].input();
		sobj[i].calTot();
		sobj[i].calper();
	}
	for(int i=0; i<5; i++)
	{
		sobj[i].print();
	}
}
