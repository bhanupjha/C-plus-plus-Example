#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a= 23, b= 567, c= 2345;
//without using setw    
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl<<endl;

//using setw    
    cout<<"The value of a setw is: "<<setw(4)<<a<<endl;
    cout<<"The value of b setw is: "<<setw(4)<<b<<endl;
    cout<<"The value of c setw is: "<<setw(4)<<c<<endl;
    return 0;
}