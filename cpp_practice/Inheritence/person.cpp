class person : public Address , public DOB
{
	char name[20];
	int age;
	public: person()
		{
			cout<<"person constructor: "<<endl;
			cout<<"Enter the name: "<<endl;
			cin>>name;
			cout<<"Enter the age: "<<endl;
			cin>>age;
		}
		void printinfo()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
		~person()
		{
			cout<<"person destructor"<<endl;
		}
};
