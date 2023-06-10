#include<iostream>
using namespace std;

float MoneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

// int strlen(const char *p){  //constant arguments

// }

int main(){
    int money = 100000;
    cout<<"if you have "<<money<<"Rs in you bank account, you will receive "<<MoneyReceived(money)<<"rs after 1 year"<<endl;
    cout<<"For VIP: if you have "<<money<<"Rs in you bank account, you wil receive "<<MoneyReceived(money, 1.1)<<"rs after 1 year"<<endl;
    return 0;
}

