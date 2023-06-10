#include<iostream>
using namespace std;

//This will not swap a and b
void swap(int a, int b){  //pass by value/call by value
                     //temp  a  b
    int temp = a;    // 2    2  5
    a = b;           // 2    5  5
    b = temp;        // 2    5  2
    cout<<"The value of a inside the function is "<<a<<endl;                
    cout<<"The value of b inside the function is "<<b<<endl;                
}

int main(){
    int x = 2, y = 5;
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    swap(x,y); //This will not swap a and b
    cout<<"After swapping"<<endl;
    cout<<"The value of x and y is not swap:"<<endl;
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    return 0;
}