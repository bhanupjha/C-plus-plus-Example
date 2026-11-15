#include <iostream>
using namespace std;

class ABC
{

};

int main()
{
	ABC obj;
	cout<<sizeof(obj)<<endl;  // sizeof empty class is 1 byte
}
