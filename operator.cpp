// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"enter number:";
//     cin>>n;
//     if(n<2) 
//     {
//         cout<<"not prime";
//         return 0;
//     }
//     else
//     {
//         for(int i=2; i<n; i++)
//         if(n%i==0)
//         {
//             cout<<"not prime";
//             return 0;
//         }
//     }
//         cout<<"prime";
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     int i=2;
//     cout<<"enter number:";
//     cin>>n;
//     if(n<2) 
//     {
//         cout<<"not prime";
//         return 0;
//     }
//     else
//     {
//         while(i<n)
//         if(n%i==0)
//         i=i+1;
//         {
//             cout<<"not prime";
//             return 0;
//         }
//     }
//         cout<<"prime";
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"number";
//     cin>>n;
//     switch(n)
// {
//     case 1:
//     {
//  cout<<"rohit";
//  break;
//     }
//  case 2:
//  {
//  cout<<"mohit";
//  break;
//  default:
//  cout<<"an-other";
// }
// }}

// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     int Ans,tns,vns;
//     int a=2;
//     int b=6;
//     int c=8;                               // output 
//     int d=9;                                 // arrenged by 2689
//      Ans = a*10+b;                           // reverced nuber 9862
//      tns=Ans*10+c;
//      vns=tns*10+d;
//     cout<<"arrenged by"<<vns<<endl;
//      int e,f,g;
//      e=b*10+a;
//      f=c*100+e;
//      g=d*1000+f;
//      cout<<"receved nuber:"<<g<<endl;
// }

// #include<iostream>
// using namespace std;
// int main () {
// //     int n=349;
// //     int r,t,v,b;
// //     r=n%100;
// //     t=n/100;
// //     v=r%10;
// //     b=r/10;
// //     cout<<"add this number:"<<t+v+b<<endl;
// //     return 0;
// // }
// int rem,num,ans=0;
// cout<<"enter number:";
// cin>>num;
// while(num!=0)
// {
//     rem=num%10;
//     num=num/10;
//     ans=ans+rem+num;
//    cout<<ans;
// }
// }


// #include<iostream>
// using namespace std;
// int main (){
//     //int n;
//     int ans,tans,vans;
//  int a=2;
//  int b=3;
//  int c=4;
//  int d=5;
//  ans=a*10+b;
//  tans=ans*10+c;
//  vans=tans*10+d;
//  cout<<"arranged number"<<vans<<endl;
//  int e,f,g;
//  e=d*10+c;
//  f=e*10+b;
//  g=f*10+a;
//  cout<<"reverced number"<<g;
// return 0;
// }


#include<iostream>
using namespace std;
int main () {
    int num,rem,ans=0,origanal;
    cout<<"enter a number:";
    cin>>num;
    origanal=num;
    while(num)                          //pallindrom 121=121
    {
        rem=num%10;
        num=num/10;
        ans=ans*10+rem;
    }
   if(origanal==ans)
   {
    cout<<"pallindrom";
   }
   else{
    cout<<"not the match number";
   }
   return 0;
  }