#include<iostream>
using namespace std;

int main(){
    int marks[] = {10, 5, 23, 11};

    int mathMarks[4];
    mathMarks[0] = 45;
    mathMarks[1] = 62;
    mathMarks[2] = 92;
    mathMarks[3] = 54;

    cout<<"These are the marks: "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"These are the Math marks: "<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

     marks[2] = 78; // we can  change the value of array

//we can access element of an array using loop
// using for loop
    // for (int i = 0; i <= 3; i++)
    // {
    //    cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
    // }

//using while loop
    //  int x = 0;
    //  while (x <= 3)
    //  {
    //     cout<<"The value of Math marks "<<x<<" is "<<mathMarks[x]<<endl;
    //     x++;
    //  }

//using Do-While loop
    //  int y = 0;
    //  do{
    //     cout<<"The value of marks "<<y<<" is "<<marks[y]<<endl;
    //     y++;
    //  }while(y <= 3);    
             
    return 0;
}