#include <iostream>
using namespace std;
#include <cstring>

class Student
{
	int Id;
	char name[20];
	float marks[5];
	float total=0, per=0;
	char grade[5];
	public: void Input()
		{
			cout<<"Enter the name: "<<endl;
			cin>>name;
			cout<<"Enter the id: "<<endl;
			cin>>Id;
			cout<<"Enter the marks: "<<endl;
			for(int i=0; i<5; i++)
			{
				cin>>marks[i];
			}
		}
		void calTotmarks()
		{
			for(int i=0; i<5; i++)
			{
				total += marks[i];
			}
		}
		void CalPer()
		{
			per= total/5;
		}
		void Calgrad()
		{
			if(per<40)
			{
				strcpy(grade, "C");
			}
			else if(per>=40 && per<=70)
			{
				strcpy(grade, "B");
			}
			else
			{
				strcpy(grade, "A");
			}
		}
		void Print()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"ID: "<<Id<<endl;
			cout<<"Marks: "<<endl;
			for(int i=0; i<5; i++)
			{
				cout<<marks[i]<<" ";
			}
			cout<<endl;
			cout<<"Total: "<<total<<endl;
			cout<<"Percentage: "<<per<<endl;
			cout<<"Grade: "<<grade<<endl;
		}
};

int main()
{
	Student sobj;
	sobj.Input();
	sobj.calTotmarks();
	sobj.CalPer();
	sobj.Calgrad();

	sobj.Print();
}
