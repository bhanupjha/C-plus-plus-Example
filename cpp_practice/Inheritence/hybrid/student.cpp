class student
{
	protected : int id;
		    char name[20];
	public : student()
		 {
			 cout<<"student constructor"<<endl;
			 cout<<"Enter the ID:"<<endl;
			 cin>>id;
			 cout<<"Enter the name:"<<endl;
			 cin>>name;
		 }
		 void print()
		 {
			 cout<<"Name: "<<name<<endl;
			 cout<<"ID: "<<id<<endl;
		 }
		 ~student()
		 {
			 cout<<"student Destructor"<<endl;
		 }
};
