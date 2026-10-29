#include <iostream>
using namespace std;
int main()
{
	int n1=20, n2=103;
	cout<<"n1: "<<n1<<" n2: "<<n2<<endl;
	swap(n1,n2);
        cout<<"n1: "<<n1<<" n2: "<<n2<<endl;

	string s1="abcd", s2="xyz";
	cout<<"s1: "<<s1<<" s2: "<<s2<<endl;
	swap(s1,s2);
        cout<<"s1: "<<s1<<" s2: "<<s2<<endl;

	double d1=20.56, d2=87.9;
	cout<<"d1: "<<d1<<" d2: "<<d2<<endl;
	swap(d1,d2);
        cout<<"d1: "<<d1<<" d2: "<<d2<<endl;

}
