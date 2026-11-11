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
	Student sobj1, sobj2, sobj3;
	sobj1.Input();
	sobj1.calTotmarks();
	sobj1.CalPer();
	sobj1.Calgrad();

	sobj2.Input();
        sobj2.calTotmarks();
        sobj2.CalPer();
        sobj2.Calgrad();

	sobj3.Input();
        sobj3.calTotmarks();
        sobj3.CalPer();
        sobj3.Calgrad();


	sobj1.Print();
	sobj2.Print();
	sobj3.Print();
}
