#include<iostream>
using namespace std;

//Function prototype
//type-function name (arguments);

//int sum(int a, int b); //..> Acceptable
//int sum(int a, b); //..> Not Acceptable
int sum(int, int); //..> Acceptable
//void g(void); //..> Acceptable
void g(); //..> Acceptable

int main(){
    int num1 = 23, num2 = 10;
    g();
    cout<<"\nThe first number is: "<<num1<<endl;
    cout<<"The second number is: "<<num2<<endl;
    cout<<"The sum of first and second number: "<<sum(num1, num2)<<endl;
    return 0;
}

int sum(int a, int b){
    int c = a + b;
    return c;  
}

void g(){
    cout<<"Hello Bhanu";

}
