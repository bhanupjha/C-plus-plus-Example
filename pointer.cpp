#include<iostream>
using namespace std;

int main(){

//*******pointer*********
//pointer ----> data type which holds the address of other data type     
    int a = 3;
    int* b = &a;
    //& ---> (Address of) operator
    cout<<"The address of a: "<<&a<<endl;
    cout<<"The address of a: "<<b<<endl;

    //* ---> (value at) Derefrence operator
    cout<<"The value at address b: "<<*b<<endl;

//Pointer to pointer
    int** c = &b;
    cout<<"The address of b: "<<&b<<endl;    
    cout<<"The address of b: "<<c<<endl;   
    cout<<"The value at address c: "<<*c<<endl; 
    cout<<"The value at address value_at(value at(c)): "<<**c<<endl<<endl;
    return 0;
}