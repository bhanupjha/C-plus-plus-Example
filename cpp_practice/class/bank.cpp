#include <iostream>
using namespace std;

class Bank
{
	int accno;
	char name[20];
	float bal;
	public: void Deposit(float amt)
		{
			bal += amt;
		}
		bool withdrawl(float amt)
		{
			if(amt<bal)
			{
				bal -= amt;
				return true;
			}
			return false;
		}
		void BalEnq()
		{
			cout<<"Balalnce in your acc is: "<<bal<<endl;
		}
		void CreateAcc()
		{
			cout<<"Enter the name:"<<endl;
			cin>>name;
			cout<<"Enter the acc no:"<<endl;
			cin>>accno;
			cout<<"Enter the balance:"<<endl;
			cin>>bal;
		}
		void Print()
		{
			cout<<"accno:"<<accno<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"Bal:"<<bal<<endl;
		}
};

int main()
{
	Bank obj;
	cout<<sizeof(obj)<<endl;
	obj.CreateAcc();
	obj.Print();
	float amt;
	cout<<"Enter the amt to be deposited:"<<endl;
	cin>>amt;
	obj.Deposit(amt);
	obj.BalEnq();
}
