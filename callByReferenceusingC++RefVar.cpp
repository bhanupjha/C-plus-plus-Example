#include<iostream>
using namespace std;

//call by reference using c++ refrence variable
void swapreferenceVar(int &a, int &b){  
    int temp = a;    
    a = b;           
    b = temp;        
}

//return by refrence
// int & swapreturnReference(int &a, int &b){  
//     int temp = a;    
//     a = b;           
//     b = temp;
//     return a;        
// } 

int main(){
    int x = 2, y = 5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapreferenceVar(x, y);
    /* After the function call, the values of x and y are swapped
    because the function worked with the original variables directly.*/
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swapreturnReference(x,y) = 23;
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}