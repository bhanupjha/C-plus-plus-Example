#include<iostream>
using namespace std;

int main(){
    int marks[5];
    marks[0] = 12;
    marks[1] = 34;
    marks[2] = 56;
    marks[3] = 80;
    marks[4] = 80;

    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p: "<<*p<<endl;
    // cout<<"The value of *(p+1): "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2): "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3): "<<*(p+3)<<endl;
    // cout<<"The value of *(p+4): "<<*(p+4)<<endl;
    return 0;
}