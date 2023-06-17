#include<iostream>
using namespace std;

// ----- Iteration -----
int factorial(int n){
    int x = 1;
    for(int i = 2; i <= n; i++){
        x = x * i;  //  x *= i;
    }
    return x;
}

int main(){
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" using iteration is "<<factorial(a)<<endl;
    return 0;
}