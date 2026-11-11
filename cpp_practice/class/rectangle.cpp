#include <iostream>
using namespace std;

class Rectangle
{
	float len, bre, area, peri;
	public: void Input()
		{
			cout<<"Enter the len:"<<endl;
			cin>>len;
			cout<<"Enter the bre:"<<endl;
		        cin>>bre;	
		}
		void CalArea()
		{
			area = len*bre;
		}
		void CalPeri()
		{
			peri = 2*(len+bre);
		}
		void Print()
		{
			cout<<"len:"<<len<<endl;
			cout<<"bre:"<<bre<<endl;
			cout<<"Area:"<<area<<endl;
			cout<<"Peri:"<<peri<<endl;
		}
};

int main()
{
	Rectangle robj;
	robj.Input();
	robj.CalArea();
	robj.CalPeri();
	robj.Print();
}
