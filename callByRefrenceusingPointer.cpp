#include<iostream>
using namespace std;


//call by reference using pointer
void swapPointer(int* a, int* b){  
    int temp = *a;    
    *a = *b;           
    *b = temp;        
}

int main(){
    int x = 10, y = 5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointer(&x, &y);
    /*After the function call, the values of x and y are swapped
    because the function modified the values indirectly through pointers.*/
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}