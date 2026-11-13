#include <iostream>
using namespace std;

class parent
{
	public: parent()
		{
			cout<<"parent constructor called"<<endl;
		}
		~parent()
		{
			cout<<"parent destructor called"<<endl;
		}

};

class child : public parent
{
	public: child()
		{
			cout<<"child constructor called"<<endl;
		}
		~child()
		{
			cout<<"child destructor called"<<endl;
		}
};

int main()
{
	child obj;   // cionstructor and destructor will invoked automatically
}
