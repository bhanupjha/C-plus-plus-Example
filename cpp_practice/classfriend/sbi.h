class SBI
{
	int accno;
	char name[20];
	float bal;
	public : SBI();
		 void Deposit(float);
		 bool withdrawl(float);
		 void BalEnq();
		 bool Transaction(HDFC &);
		 friend bool HDFC :: Transaction(SBI &);
};
