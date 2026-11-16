#include <iostream>
using namespace std;

class SBI
{
        int accno;
        char name[20];
        float amt;
        public : SBI()
                 {
                         cout<<"SBI: Enter the account no:"<<endl;
                         cin>>accno;
                         cout<<"SBI: Enter the name: "<<endl;
                         cin>>name;
                         cout<<"SBI: Enter the balance: "<<endl;
                         cin>>amt;
                 }
                 void balenq()
                 {
                         cout<<"SBI: Balance n your account: "<<amt<<endl;
                 }
                 void deposit()
                 {
                         int bal;
                         cout<<"SBI: Enter the balance to deposit: "<<endl;
                         cin>>bal;

                         amt += bal;
                 }
                 bool withdrawl()
                 {
                         int bal;
                         cout<<"SBI: Enter the balance to withdrawl: "<<endl;
                         cin>>bal;
                         if(bal<=amt)
                         {
                                 amt -= bal;
                                 return true;
                         }
                         return false;
                 }
};

int main()
{
        SBI sobj;
        sobj.deposit();
        sobj.balenq();
        if(sobj.withdrawl())
        {
                cout<<"Transaction successfull"<<endl;
        }
        else
                cout<<"Transaction unsuccessfull"<<endl;
        sobj.balenq();
}


