#include<iostream>
using namespace std;

int main(){
     int a = 10;
     cout<<"The value of a: "<<a<<endl;
     a = 20;
     cout<<"The value of b: "<<a<<endl;
     
    //using constant 
     const int b = 25;
     cout<<"The value of b: "<<b<<endl;
    // b = 5; //we will get an error because b is constant
    cout<<"The value of b: "<<b<<endl;
    return 0;
}