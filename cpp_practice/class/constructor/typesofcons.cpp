#include <iostream>
using namespace std;

class circle
{
	float rad, area, peri;
	public: circle()
		{
			cout<<"Default constructor: "<<endl;
			cout<<"Enter the rad: "<<endl;
			cin>>rad;
			area=peri=0;
		}
		circle(float f)
		{
			cout<<"Parametrized constructor: "<<endl;
			rad = f;
		}/*
		circle(circle &obj)
		{
			cout<<"Copy constructor: "<<endl;
			rad = obj.rad;
			area = obj.area;
			peri = obj.peri;
		}*/
		void calarea()
		{
			area = 3.14 * rad * rad;
		}
		void calperi()
		{
			peri = 2 * 3.14 * rad;
		}
		void print()
		{
			cout<<"Radius: "<<rad<<endl;
			cout<<"Area: "<<area<<endl;
			cout<<"Peri: "<<peri<<endl;
		}
};

int main()
{
	circle cobj;
	cobj.calarea();
	cobj.calperi();
	cobj.print();

	circle cobj1(2.3f);
	cobj1.calarea();
        cobj1.calperi();
        cobj1.print();

	circle cobj2 = cobj; // if programmer not supply copy constructor compiler supply it.
	cobj2.print();
}
