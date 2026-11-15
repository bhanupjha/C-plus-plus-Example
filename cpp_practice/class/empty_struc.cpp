// empty class in c++ is 1 byte
#include <iostream>
using namespace std;

struct ABC
{

};

int main()
{
	struct ABC obj;
	cout<<sizeof(obj)<<endl;  // 1 byte
}
