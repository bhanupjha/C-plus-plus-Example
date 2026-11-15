// expected 5 byte but 4 byte why?
// if we created child class and parent class is empty so parent class consider as 0 byte
// but when no data member is intialised i.e empty then 1 byte.
#include <iostream>
using namespace std;

class ABC
{

};

class xyz : public ABC
{
	 int data1;
};
int main()
{
	xyz obj;
	cout<<sizeof(obj)<<endl;  // 4 byte
}
