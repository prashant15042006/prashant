// #include<iostream>
// using namespace std;
//  int main () {
//     int a = 10;
//     int *ptr = &a;
//     cout<<ptr<<endl;
//     cout<<&a<<endl;
//  }


// #include<iostream>
// using namespace std;
//  int main () {
//  int a = 10;
//  int *ptr = &a;            
//  cout<<ptr<<endl;           //0x61...hexa
//  cout<<&a<<endl;            //0x61...hexa
//  cout<<*ptr<<endl;          //10
//  cout<<a<<endl;             //10
// return 0;
//  }


// #include<iostream>
// using namespace std;
// int main () {
//     int a = 90;
//     int b = 40;
//     int* const ptr = &a;
//     ptr = &b;
//     return 0;
// }


#include<iostream>
using namespace std;
int main  () {
    int a  = 10;
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    int b = 20;
    ptr = &b;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    for(int i=0; i<5; i++)
    cout<<ptr+i<<endl;
}

