#include <iostream>
using namespace std;

struct st
{
	int id;
	char name[20];
	float marks[6];
	char emailid[20];
};

void Input(struct st &v)
{
	cout<<"Enter the id:"<<endl;
	cin>>v.id;
	cout<<"enter the name:"<<endl;
	cin>>v.name;
	cout<<"enter the marks:"<<endl;
	for(int i=0; i<6; i++)
	{
		cin>>v.marks[i];
	}
	cout<<"Enter the email id"<<endl;
	cin>>v.emailid;
}

void Print(struct st &v)
{
	cout<<"id:"<<v.id<<endl;
	cout<<"name:"<<v.name<<endl;
	for(int i=0; i<6; i++)
	{
		cout<<v.marks[i]<<" ";
	}
	cout<<endl;
	cout<<"emailid:"<<v.emailid<<endl;
}

int main()
{
	struct st var;
	Input(var);
	Print(var);
}
