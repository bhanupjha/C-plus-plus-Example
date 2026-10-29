#include <iostream>
using namespace std;

int main()
{
	int data=34;
	char x='h';
	float val= 56.7;
	double num=45.89;

	cout<<typeid(data).name()<<endl;
        cout<<typeid(x).name()<<endl;
        cout<<typeid(val).name()<<endl;
        cout<<typeid(num).name()<<endl;
}
