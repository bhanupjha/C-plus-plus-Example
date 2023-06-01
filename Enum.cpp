#include<iostream>
using namespace std;

//***Example 1*****

// enum year{
//     January,
//     Feburary,
//     March,
//     April,
//     May,
//     June,
//     August,
//     September,
//     October,
//     November,
//     December
// };

// int main(){
//     //cout<<January<<endl;
//     for (int i = January; i <= December; i++)
//     {
//         cout<<i<<endl;
//     }
//     return 0;
// }


//**Example 2***

int main(){
    enum Meal{breakfast, lunch, dinner };
    Meal m = lunch;
    cout<<m<<endl; //1
    cout<<(m == 2); // it is false(0)
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    return 0;
}