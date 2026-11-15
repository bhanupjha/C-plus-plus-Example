// child 1
class voterid : public person
{
	int voterId;
	static int cnt;
	public : voterid()
		 {
			 cout<<"voter id constructor"<<endl;
			 voterId = cnt++;
		 }
		 void voteridDetails()
		 {
			 print();
			 cout<<"Voter Id: "<<voterId<<endl;
		 }
		 ~voterid()
		 {
			 cout<<"voter id destructor"<<endl;
		 }
};

int voterid :: cnt=123456;
