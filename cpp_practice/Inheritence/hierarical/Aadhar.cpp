class aadhar : public person
{
	int aadharid;
	static int cnt;
	public : aadhar()
		 {
			 cout<<"aadhar constructor"<<endl;
			 aadharid = cnt++;
		 }
		 void aadhariddetail()
		 {
			 print();
			 cout<<"Addhar id: "<<aadharid<<endl;
		 }
		 ~aadhar()
		 {
			 cout<<"aadhar destructor"<<endl;
		 }
};

int aadhar :: cnt=100008;
