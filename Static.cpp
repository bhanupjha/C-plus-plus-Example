#include<iostream>
using namespace std;

int Division(int &a, int &b){ 
    //Do not use static with inline function
    static int c = 0;  //This executes only once
    c = c + 1;         //Next time this function is run, the value of c is retained
    return a*b+c;                     
}


int main(){
    int a, b;
    cout<<"Enter the two number: "<<endl;
    cin>>a>>b;
    Division(a,b);
    cout<<"The divison of two number is: "<<Division(a, b)<<endl;
    cout<<"The divison of two number is: "<<Division(a, b)<<endl;
    cout<<"The divison of two number is: "<<Division(a, b)<<endl;
    cout<<"The divison of two number is: "<<Division(a, b)<<endl;
    cout<<"The divison of two number is: "<<Division(a, b)<<endl;
    return 0;
}