#include <iostream>
using namespace std;

int main()
{
	int a[5]={10, 20, 30, 40, 50};
	int (&r)[5]=a;

	for(int i=0; i<5; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

	//using reference variable changing the array value
	r[2]=80;
	r[4]=100;

	for(int i=0; i<5; i++)
        {
                cout<<a[i]<<" ";
        }
        cout<<endl;

}

