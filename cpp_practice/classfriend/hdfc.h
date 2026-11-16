class HDFC
{
	int accno;
	char name[20];
	float bal;
	public  : HDFC();
		  void Deposit(float);
		  bool withdrawl(float);
		  void BalEnq();
		  bool Transaction(SBI &);
		  friend class SBI;
};
