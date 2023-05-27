#include<iostream>
using namespace std;

int main(){

//*************float, double, long double Literals*******************    
    float a = 34.4F;
    long double c = 34.4L;
    cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl; //By default it is treated as double

    cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl; //if we put 34.4F(attach F/f) then the no. is floating point no.
    cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl; 

    cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl; //if we put 34.4d(attach d/D) then the no. is double
    cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl<<endl;
    
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of c is : "<<c<<endl;
    return 0;   
}