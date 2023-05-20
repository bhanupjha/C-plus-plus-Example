#include<iostream> // syatem header files
#include "this.h" /*--> this will produce an error if this.h 
is no present in the current directory. if we create an empty
file of this.h it will not gives any error.*/

using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter the value of num1: "; // '<<' is called insertion operator
    cin>>num1; // '>>' is called extraction operator
    cout<<"\nEnter the value of num2: ";
    cin>>num2;

    cout<<"\nThe sum is: "<<num1 + num2;
    return 0;  
}