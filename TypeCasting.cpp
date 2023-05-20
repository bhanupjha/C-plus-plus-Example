#include<iostream>
using namespace std;

int main(){

//**************Type casting**********************
    int X = 34;
    float  Y = 54.67;
    cout<<"The value of X is: "<<(float)X<<endl;
    cout<<"The value of X is: "<<float(X)<<endl;  

    cout<<"The value of Y is: "<<(int)Y<<endl;
    cout<<"The value of Y is: "<<int(Y)<<endl;   
    int c = int(Y);
    cout<<"The value of c is: "<<c<<endl<<endl;

    cout<<"The value of expression is: "<<X+Y<<endl;
    cout<<"The value of expression is: "<<X+int(Y)<<endl;
    cout<<"The value of expression is: "<<X+(int)Y<<endl;
    cout<<"The value of expression is: "<<Y+float(X)<<endl;
    cout<<"The value of expression is: "<<X+c<<endl;
    return 0;
}