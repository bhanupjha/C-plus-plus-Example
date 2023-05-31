#include<iostream>
using namespace std;

//A structure is a user-defined data type in C/C++.
//Structures (also called structs) are a way to group several related variables into one place.
//Each variable in the structure is known as a member of the structure.
struct employee
{
   int eId;      //member 1
   char favChar; //member 2
   float salary; //member 3
};

// typedef struct employee 
// /* typedef...>  it is basically a reserved keyword that we use in order to create 
// an alias name (assign a new name to a pre-existing data type) for a specific data type.*/
// {
//    int eId;        
//    char favChar;   
//    float salary;
// }ed;

int main(){
    struct employee Ankit;
    // ed shubham;
    Ankit.eId = 1;
    Ankit.favChar = 'a';
    Ankit.salary = 1200000000;
    // shubham.salary = 1000000;
    cout<<"Ankit eId is: "<< Ankit.eId<<endl;
    cout<<"Ankit fav Character is: "<<Ankit.favChar<<endl;
    cout<<"Ankit salary is: "<<Ankit.salary<<endl;
    // cout<<"Shubham salary is: "<<shubham.salary<<endl;
    return 0;
}