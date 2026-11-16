SBI :: SBI()
{
	cout<<"Enter the accno: "<<endl;
	cin>>accno;
	cout<<"Enter the name: "<<endl;
	cin>>name;
	cout<<"Enter the bal: "<<endl;
	cin>>bal;
}

void SBI :: Deposit(float amt)
{
	bal += amt;
}

bool SBI :: withdrawl(float amt)
{
	if(amt<=bal)
	{
		bal -=amt;
		return true;
	}
	return false;
}

void SBI :: BalEnq()
{
	cout<<"Bal in ur acc is: "<<bal<<endl;
}

bool SBI :: Transaction(HDFC &s)
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
