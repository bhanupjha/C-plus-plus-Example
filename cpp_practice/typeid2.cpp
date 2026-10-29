#include <iostream>
using namespace std;

int main()
{
	int marks[5];
	char name[20]="hello";
	char d[]={'A', 'B', 'C', 'D', 'E'};
	double *q;

	cout<<typeid(marks).name()<<endl;
        cout<<typeid(name).name()<<endl;
        cout<<typeid(d).name()<<endl;
        cout<<typeid(q).name()<<endl;	
}

