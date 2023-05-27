#include<iostream>
using namespace std;

int main(){
    int a= 3, b= 4;

    int c = ((((a*5)+b)-8)/2);//folow operator precedence
    cout<<"The value of c is: "<<c<<endl; //5

    int d = a*5+b-8/2; /*follow BODMASS(in some case it is right) but in 
         programming we use operator precedence*/
    cout<<"The value of d is: "<<d; //15
    
    return 0;
}