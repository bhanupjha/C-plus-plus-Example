class Address
{
	protected:
		char city[20];
		char state[20];
	public:
		Address()
		{
			cout<<"Address constructor: "<<endl;
			cout<<"Enter the city: "<<endl;
			cin>>city;
			cout<<"Enter the state: "<<endl;
			cin>>state;
		}
		void printAddress()
		{
			cout<<"City: "<<city<<endl;
			cout<<"State: "<<state<<endl;
		}
		~Address()
		{
			cout<<"Address destructor"<<endl;
		}
};
