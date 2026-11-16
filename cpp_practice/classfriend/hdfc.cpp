HDFC :: HDFC()
{
	cout<<"Enter the accno:"<<endl;
	cin>>accno;
	cout<<"Enter the name:"<<endl;
	cin>>name;
	cout<<"Enter the bal:"<<endl;
	cin>>bal;
}

void HDFC :: Deposit(float amt)
{
	bal+=amt;
}

bool HDFC :: withdrawl(float amt)
{
	if(amt<=bal)
	{
		bal-=amt;
		return true;
	}
	return false;
}

void HDFC :: BalEnq()
{
	cout<<"bal in ur acc is: "<<bal<<endl;
}

bool  HDFC :: Transaction(SBI &s)
{
	float amt;
	cout<<"Enter the amount to be transfer: "<<endl;
	cin>>amt;
	if(amt<=bal)
	{
		bal-=amt;
		s.bal+=amt;
		return true;
	}
	return false;
}
