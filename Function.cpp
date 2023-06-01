#include<iostream>
using namespace std;

int sum(int a, int b){
    // Formal parameters a and b will be taking values from Actual parameter num1 and num2
    int c = a + b;
    return c;  
}

int main(){
    int num1, num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    //num1 and num2 are Actual parameters
    cout<<"The sum of two number: "<<sum(num1, num2)<<endl;
    return 0;
}