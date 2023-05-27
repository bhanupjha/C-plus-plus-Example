#include<iostream>
using namespace std;

int glo = 11;    // Global variable
void sum(){
    int a;
    cout<<"glo: "<<glo;  //print global variable
}

int main(){
    int glo = 7;   //local variable
    glo = 34;     //update local variable 
    sum();
    cout<<"\nvalue of glo: "<<glo; //print local variable
    cout<<"\nvalue of glo: "<<::glo; //if we want to access global variable then we use scope relation operator 

    char var = 'B';
    cout<<"\nThe value is: "<<var;
    var = '3'; //This is also valid
    cout<<"\nthe value is: "<<var;
    return 0;
}
