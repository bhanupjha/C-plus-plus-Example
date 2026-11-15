class DOB
{
	protected:
		int day;
		int month;
		int year;
	public:
		DOB()
		{
			cout<<"DOB constructor: "<<endl;
			cout<<"Enter the date of birth: "<<endl;
			cin>>day>>month>>year;
		}
		void getdob()
		{
			cout<<"DOB: ";
			cout<<day<<"-"<<month<<"-"<<year<<endl;
		}
		~DOB()
		{
			cout<<"DOB destructor"<<endl;
		}
};
