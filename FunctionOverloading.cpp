#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with 2 arguments ";
    return a + b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments ";
    return a + b + c;
}

//calculate the volume of cylinder
int volume(double r, int h ){
    return (3.14 * r * r * h);

}

// calculate the volume of cube
int  volume(int a){
    return (a * a * a);
}

//calcuate the volume of rectangular box
int volume(int l, int b, int h){
    return (l * b * h);
}

int main(){ 
    cout<<"the sum of 5 and 3 is: "<<sum(5, 3)<<endl;
    cout<<"the sum of 5, 3 and 7 is: "<<sum(5, 3, 7)<<endl;
    cout<<"The volume of cylinder of radius 5 and height 6 is: "<<volume(5, 6)<<endl;
    cout<<"The volume of cube of side 5 is: "<<volume(5)<<endl;
    cout<<"The volume of cuboid of 5, 7 and 9 is: "<<volume(5, 7, 9)<<endl;
    return 0;
}