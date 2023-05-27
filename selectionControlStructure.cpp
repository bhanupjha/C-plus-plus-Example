#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age: ";
    cin>> age;

// 1. selection control structure: if else-if ladder  

    // if((age <= 13) && (age >= 1)){
    //     cout<<"you canot come to party";
    // } 
    // else if((age <= 16) && (age >= 14)){
    //     cout<<"you are a kid and you will get a kid pass to come the party";
    // }
    // else if(age > 25){
    //     cout<<"You can't come to the party";
    // }
    // else if(age < 1){
    //     cout<<"You are not yet born";
    // }
    // else{
    // cout<<"you come and join the party";
    // }

// 2.  selection control structure: Switch case statement

    // switch (age)
    // {
    // case 18:
    //     cout<<"You are 18"<<endl;
    //    // break..>  if we don't use it then next case statements will be executed until break appears.
    // case 22:
    //     cout<<"You are 22"<<endl;
    //     break; // The break statement ends execution of the nearest enclosing loop or conditional statement in which it appears.
    
    // default:
    //     cout<<"No such cases"<<endl;
    //     break;
    // } 
    return 0;
}