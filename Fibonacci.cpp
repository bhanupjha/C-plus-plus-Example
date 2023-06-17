#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

// The Fibonacci Sequence: 
// 1,1,2,3,5,8,13,21,34,55,89,144,233,377...
// 1+1=2                13+21=34
// 1+2=3                21+34=55
// 2+3=5                34+55=89
// 3+5=8                55+89=144
// 5+8=13               89+144-233
// 8+13=21              144+233=377


int main(){
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}