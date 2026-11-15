class ECE : virtual public student
{
	protected: float marks[6];
	public : ECE()
		 {
			 cout<<"ECE constructor"<<endl;
			 cout<<"Enter the marks: "<<endl;
			 for(int i=0; i<6; i++)
			 {
				 cin>>marks[i];
			 }
		 }
		 void Eprint()
		 {
			cout<<"Marks: ";
			for(int i=0; i<6; i++)
                        {
                                 cout<<marks[i]<<" ";
                        }
			cout<<endl;
		 }
		 ~ECE()
		 {
			 cout<<"ECE destructor"<<endl;
		 }
};
