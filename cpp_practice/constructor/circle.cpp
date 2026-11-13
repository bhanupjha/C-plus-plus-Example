#include <iostream>
using namespace std;

class circle
{
	float rad, peri, area;
	public: circle()
		{
			cout<<"Default constructor"<<endl;
			cout<<"Enter the radius of circle: "<<endl;
			cin>>rad;
			peri=area=0;
		}
		void calarea()
		{
			area = 3.14 *rad *rad;
		}
		void calperi()
		{
			peri = 2 * 3.14 *rad;
		}
		void print()
		{
			cout<<"Area of the circle: "<<area<<endl;
			cout<<"perimeter of the circle: "<<peri<<endl;
		}
};


int main()
{
	circle cobj; // default constructor, called  internally its call cobj.circle()
	cobj.calarea();
	cobj.calperi();

	cobj.print();
}
