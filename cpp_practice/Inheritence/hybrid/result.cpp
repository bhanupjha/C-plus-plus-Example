#include <string.h>
class result : public ECE, public sports
{
	float totalmarks;
	float per;
	char grade[3];
	public : result()
		 {
			 cout<<"Result constructor"<<endl;
			 totalmarks=per=0;
		 }
		 void caltotalmarks()
		 {
			 for(int i=0; i<6; i++)
			 {
			 	totalmarks += marks[i];
			 }
		 }
		 void calper()
		 {
			 per = totalmarks/6;
		 }
		 void calgrade()
		 {
			 if(per<40)
				 strcpy(grade, "C");
			 else if(per>=40 && per<60)
				 strcpy(grade, "B");
			 else if(per>=60 && per<80)
				 strcpy(grade, "A");
			 else
				 strcpy(grade,"A+");
		 }
		 void rprint()
		 {
			 print();
			 Eprint();
			 sprint();
			 cout<<"Total marks: "<<totalmarks<<endl;
			 cout<<"Percentage: "<<per<<endl;
			 cout<<"Grade: "<<grade<<endl;
		 }
		 ~result()
		 {
			 cout<<"Result destructor"<<endl;
		 }
};
