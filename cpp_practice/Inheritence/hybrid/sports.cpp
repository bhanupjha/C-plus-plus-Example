class sports : virtual public student
{
	protected : char sgrade[3];
	public : sports()
		 {
			 cout<<"sports constructor"<<endl;
			 cout<<"Enter the sports grade:"<<endl;
			 cin>>sgrade;
		 }
		 void sprint()
		 {
			 cout<<"sports Grade:" <<sgrade<<endl;
		 }
		 ~sports()
		 {
			 cout<<"sports destructor"<<endl;
		 }
};
