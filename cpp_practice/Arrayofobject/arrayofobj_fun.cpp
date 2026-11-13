#include <iostream>
using namespace std;
#include <cstring>

class student
{
	int id, total=0, per=0;
	char grade[2];
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
		void calgrade()
		{
			if(per>90)
				strcpy(grade, "A+");
			else if(per>=70 && per<=90)
				strcpy(grade, "A");
			else if(per>=50 && per<70)
				strcpy(grade, "B");
			else
				strcpy(grade, "C");
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
			cout<<"Grade: "<<grade<<endl;
		}

};


void setstudentdetail(student *ptr)
{
	for(int i=0; i<5; i++)
	{
		ptr[i].input(); //  (ptr+i)->input();
		ptr[i].calTot();
		ptr[i].calper();
		ptr[i].calgrade();
	}
}

void getstudentdetail(student *ptr)
{
	for(int i=0; i<5; i++)
        {
        	ptr[i].print();
        }
}

int main()
{
	student sobj[5];
	setstudentdetail(sobj);
	getstudentdetail(sobj);
}
