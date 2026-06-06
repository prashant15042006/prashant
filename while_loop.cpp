
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int i,n;
//     i=1;
//     cout<<"enter number:";                      // use while loop create the table
//     cin>>n;
//     while(i<=10)
//     {
//         cout<<n<<" * "<<i<<" = "<<i*n<<endl;
//         i=i+1;
//     }
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int a,i;
//    a=2;
//    cout<<"enter number";
//    cin>>a;
//    if(a<2)
//    {
//     cout<<"not prime";
//  return 0;
//    }
//    else
//    {
//     while(i<a)                                // define prime,  not prime number
//     if(a%i==0)
//     {
//         cout<<"not prime";
//         return 0;
//     }
//     i=i+1;
//     cout<<"prime";
//    }
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int rem,ans,num,multi;
//     ans=0;
//     multi=1;
//     cout<<"enter the decimal number: ";
//     cin>>num;
//     while(num>0)
//     {
//         //remender
//               rem=num%2;  // rem%=2;
//         //quotient                              // Decimal to Binary number
//           num/=2;   //    num=num/2;     
//         //answer
//          ans+=rem*multi;  //  ans=rem*multi+ans;   
//         //multiply
//            multi*=10;  //  multi=multi*10;      
//     }
//         cout<<ans;
//     }


#include<iostream>
using namespace std;
int main (){
 int num;
 cout<<"enter number:";
 cin>>num;
 int rem,ans=0,multi=1;
 while( num>0)
 {                                  //Binary to Decimal
    rem=num%10;
    num=num/10;
    ans=rem*multi+ans;
    multi=multi*2;
 }
 cout<<ans;
}
