#include<iostream>
using namespace std;

//-------Recursion-------
int factorial(int n){   
/* A base case is a condition that stops the recursion and allows the function to return a value without making any further recursive calls.
   It provides a termination condition for the recursion.

   If we does not defined base case in the code. This code will lead to a stack overflow error because there is no termination
   condition for the recursive calls.
*/ if(n<=1){                
        return 1;            
    }                        
    return n * factorial(n - 1);  // The function calls itself with the argument n - 1 until it reaches the base case.
}

// step by step calculation of factorial:
// factorial(5) = 5 * factorial(4);
// factorial(5) = 5 * 4 * factorial(3);
// factorial(5) = 5 * 4 * 3 * factorial(2;)
// factorial(5) = 5 * 4 * 3 * 2 * factorial(1);
// factorial(5) = 5 * 4 * 3 * 2 * 1;
// factorial(5) = 120;

int main(){
    // Factorial of a number:
    // 5! = 5*4*3*2*1 = 120
    // 0! = 1   by  definition
    // 1! = 1   by definition
    // n! = n * (n-1)!

    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" using recursion is "<<factorial(a)<<endl;
    return 0;
}