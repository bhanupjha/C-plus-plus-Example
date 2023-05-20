#include<iostream>
using namespace std;
int main(){
    int a = 10, b= 5;
    
    //Arithmetic operator
    cout<<"Following are the Arthmetic opertor"<<endl;
    cout<<"The value of a + b is: "<<a+b<<endl; //15
    cout<<"The value of a - b is: "<<a-b<<endl; //5
    cout<<"The value of a * b is: "<<a*b<<endl; //50
    cout<<"The value of a / b is: "<<a/b<<endl; //2
    cout<<"The value of a % b is: "<<a%b<<endl; //0
    cout<<"The value of a++ is: "<<a++<<endl; //10
    cout<<"The value of a-- is: "<<a--<<endl; //11
    cout<<"The value of ++a is: "<<++a<<endl; //11
    cout<<"The value of --a is: "<<--a<<endl<<endl; //10
    
    //Assignment operator
    // int a = 5, b = 10;
    // char b = 'B', c = 'd';

    //Comparison Operator
    cout<<"Following are the comparison operator"<<endl;
    cout<<"The value of a == b: "<<(a==b)<<endl; //False..> // 0
    cout<<"The value of a != b: "<<(a!=b)<<endl; //True..> // 1
    cout<<"The value of a > b: "<<(a>b)<<endl; //True..> // 1
    cout<<"The value of a < b: "<<(a<b)<<endl; //False..> // 0
    cout<<"The value of a >= b: "<<(a>=b)<<endl; //True..> // 1
    cout<<"The value of a <= b: "<<(a<=b)<<endl<<endl; //False..> //0

    //Logical Operator
    cout<<"Following are the Logical operator"<<endl;
    cout<<"The value of this logical AND operator (a==b)&&(a>b)) is: "<<((a==b)&&(a>b))<<endl; // 0
    /*&&..> if both condition is true then it is 1 otherswise 0 (false) */
    cout<<"The value of this logical OR operator (a==b)||(a>b)) is: "<<((a==b)||(a>b))<<endl; //1
    /* if anyone cond. is true then it is 1 */
    cout<<"The value of this logical NOT operator (!(a==b)) is: "<<(!(a==b))<<endl; //1
    /*suppose the given cond output is 0 (false) then i will add NOT operator on the condition it will give 
      opposite output that is 1 means true*/
    return 0;
}