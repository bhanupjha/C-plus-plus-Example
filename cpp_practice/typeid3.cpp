#include <iostream>
using namespace std;
struct student
{
	int x;
	char str[40];
	float z;
};
union uts
{
	float f;
	char y;
};

int main()
{
	struct student var;
	union uts uar;
	
	union uts *q;
	string s;

	cout<<typeid(var).name()<<endl;
	cout<<typeid(uar).name()<<endl;

	cout<<typeid(q).name()<<endl;
	cout<<typeid(s).name()<<endl;
}
