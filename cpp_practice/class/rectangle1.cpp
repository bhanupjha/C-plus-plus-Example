#include <iostream>
using namespace std;

class Rectangle
{
	int len, bre, area , peri;
	public: void Input()
		{
			cout<<"Enter the length:"<<endl;
			cin>>len;
			cout<<"Enter the breadth:"<<endl;
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
			cout<<"Length: "<<len<<endl;
			cout<<"Breadth: "<<bre<<endl;
			cout<<"Area: "<<area<<endl;
			cout<<"Peri: "<<peri<<endl;

		}
};

int main()
{
	Rectangle robj1, robj2;
	robj1.Input();
	robj1.CalArea();
	robj1.CalPeri();
	robj2.Input();
        robj2.CalArea();
        robj2.CalPeri();

	robj1.Print();
	robj2.Print();
}
