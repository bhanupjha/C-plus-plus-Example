#include<iostream>
using namespace std;

inline int product(int &a, int &b){ //inline...> An inline function is a function is expanded in line when it is called
    return a*b;                     // It may increase efficiency if it is called
}


int main(){
    int a, b;
    cout<<"Enter the two number: "<<endl;
    cin>>a>>b;
    product(a,b);
    cout<<"The product of two number is: "<<product(a, b)<<endl;
    cout<<"The product of two number is: "<<product(a, b)<<endl;
    cout<<"The product of two number is: "<<product(a, b)<<endl;
    cout<<"The product of two number is: "<<product(a, b)<<endl;
    cout<<"The product of two number is: "<<product(a, b)<<endl;
    cout<<"The product of two number is: "<<product(a, b)<<endl;
    cout<<"The product of two number is: "<<product(a, b)<<endl;
    cout<<"The product of two number is: "<<product(a, b)<<endl;
    return 0;
}