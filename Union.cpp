#include<iostream>
using namespace std;

//A union is a user-defined type in which all members share the same memory location. 
//It means a union can contain no more than one object from its list of members.
union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
    union money m1;
    m1.rice = 25;
    cout<<"The first value at the allocated memory: "<<m1.rice<<endl;
    m1.car = 34; // print ASCII value
    cout<<"The next value is stored after removing the first value: "<<m1.car <<endl;
    m1.pounds = 2500000;
    cout<<"The Final value value at the same allocated memory space : "<<m1.pounds<<endl; 
    return 0;
}