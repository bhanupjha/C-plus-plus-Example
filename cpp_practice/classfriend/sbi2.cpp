SBI :: SBI()
{
	cout<<"Enter the acc no:"<<endl;
	cin>>accno;
	cout<<"Enter the name: "<<endl;
	cin>>name;
	cout<<"Enter the amount:"<<endl;
	cin>>amt;
}

void SBI :: Deposit()
{
	int bal;
	cout<<"Enter the amt: "<<endl;
	cin>>bal;

	amt += bal;
}

void SBI :: BalEnq()
{
	cout<<"bal in ur account: "<<amt<<endl;
}
