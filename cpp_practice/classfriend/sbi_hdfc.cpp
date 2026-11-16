#include <iostream>
using namespace std;

class HDFC
{
	int accno;
	char name[20];
	float amt;
	public : HDFC()
		 {
			 cout<<"HDFC: Enter the account no:"<<endl;
			 cin>>accno;
			 cout<<"HDFC: Enter the name: "<<endl;
			 cin>>name;
			 cout<<"HDFC: Enter the balance: "<<endl;
			 cin>>amt;
		 }
		 void balenq()
		 {
			 cout<<"HDFC: Balance n your account: "<<amt<<endl;
		 }
		 void deposit()
		 {
			 int bal;
			 cout<<"HDFC: Enter the balance to deposit: "<<endl;
			 cin>>bal;

			 amt += bal;
		 }
		 bool withdrawl()
		 {
			 int bal;
			 cout<<"HDFC: Enter the balance to withdrawl: "<<endl;
			 cin>>bal;
			 if(bal<=amt)
			 {
				 amt -= bal;

				 return true;
			 }
			 return false;
		 }
};


int main()
{
	HDFC hobj;
	hobj.deposit();
	hobj.balenq();
	if(hobj.withdrawl())
	{
		cout<<"Transaction successfull"<<endl;
	}
	else
		cout<<"Transaction unsuccessfull"<<endl;
	hobj.balenq();
}
