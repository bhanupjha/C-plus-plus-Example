#include<iostream>
using namespace std;

int main(){

// Q.No. 1:
    // cout<<"nn\n\nnn\n";
    // cout<<"nn/n/nnn/n";

// Q.No. 2: 
    // cout<<"* Bhanu */ prakash/n\nbhanu*/";    

// Q.No. 3:
//  // cout<<"(4+3)*1"(4+3);  // it throw an error in c++ we cannot directly concatenate a string with an integer
    // cout<<"(4+3)*1"<<(4+3);

// Q.No. 4:
    // cout<<4<<endl;    // it is consider as number
    // cout<<4+3<<endl;    
    // cout<<"4+3";    // it is consider to be text

// Q.No. 5:
    // int x;
    // x = 7;
    // x = 15;
    // x = 20;
    // cout<<x;    

// Q.No. 6:
    // int x;
    // x = 19;
    // cout<<x<<endl;
    // x = x + 10;
    // cout<<x;    

 // Q.No. 7:
    // int x = 5;
    // cout<<x;
    // x = 7;
    // cout<<x;
    // x = x + 6;
    // cout<<x;
    // x = x - 20;
    // cout<<x;  

 // Q.No. 8:
    // int x = 4;
    // cout<<x<<endl;
    // x -= 5;
    // cout<<x<<endl;
    // x *= 8;
    // cout<<x;

// Q.No.9:
    // int x = 5;
    // cout<<++x<<endl;
    // x++;
    // cout<<x;

// Q.No. 10:
    // int x = 5;
    // cout<<x--<<endl;
    // cout<<x;

// Q.No. 11:
    // cout<< 5/2<<endl;        
    // cout<< 5.0/2<<endl;        
    // cout<< 5/2.0<<endl;        
    // cout<< 5.0/2.0<<endl;   
    // cout<<5+3.14<<endl;     

// Q.No. 12:
    // float x = 5;
    // cout<<x<<endl;
    // x = 5.0;
    // cout<<x<<endl;
    // cout<<5.0;

// Q.no. 13: Take two integer input a and b: a>b, and find the remainder when a is divided by b

// *****First method**********************
    // int a = 16;  // a means dividend
    // int b = 3;  //b is divisor
    // int q = a/b; // q is quotient
    // int r;  // r is remainder
    // // a = (b*q) + r
    // r = a - (b*q);
    // cout<<r;

// *******using modulo operator****************
    // int a = 10,b = 3,c;
    // c = a%b;
    // cout<<c;

/* Note:-  if a > b..> a % b..> remainder  
           if a < b..> a % b = a  
           a % (-b) = a % b
           (-a) % b = -(a % b)
           (-a) % (-b) = (-a) % b = -(a % b)*/

// Q.no. 14:
    // int a = 10;
    // int b = 3;
    // cout<<a%b<<endl;          
    // cout<<a%(-b)<<endl;          
    // cout<<(-a)%b<<endl;         
    // cout<<(-a)%(-b)<<endl;       

// Q.no. 15: 
    // int a = 2;
    // int b = 3;
    // cout<<a%b<<endl;          
    // cout<<a%(-b)<<endl;          
    // cout<<(-a)%b<<endl;         
    // cout<<(-a)%(-b)<<endl;     

// Q.no. 16: calculating percentage of 5 subject in float
    // float x1 = 90; // x1 can be physics
    // float x2 = 97; // x2 can be chemistry
    // float x3 = 92; // x3 can be biology
    // float x4 = 80; // x4 can be mathamatics
    // float x5 = 98; // x5 can be english
    // float percent = (x1 + x2 + x3 + x4 + x5)/5;
    // cout<<percent<<endl;
    // cout<<int(percent);

// Q.no. 17: calculating area of radius
    // float radius = 5;
    // float pi = 3.1415;
    // float area = pi*radius*radius;
    // cout<<area;    

// Q.no. 18: calculating simple interest
    // float p,r,t,si;
    // p = 100;
    // r = 10;
    // t = 2;
    // si = (p*r*t)/100;
    // cout<<si;  

// Q.no. 19:
    bool flag = false;
    cout<<flag<<endl;  
    flag = 0;
    cout<<flag<<endl;
    // if i take any intger except 0 it gives 1  
    flag = 25;
    cout<<flag<<endl;
    flag = 3.4;
    cout<<flag<<endl;
    flag = -3;
    cout<<flag<<endl;
    return 0;
}