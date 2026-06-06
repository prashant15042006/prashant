// #include<iostream>
// using namespace std;
// int main () {
//     int row,col;
//     for(row=0; row<6; row++)
//     {
//         for(col=0; col<=row; col++)
//         { char name ='A'+col;
//             cout<<name;
//         }
//         cout<<endl;
//     }
// }
    // output  
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    // ABCDEF

// #include<iostream>
// using namespace std;
// int main () {
//     int row,col;
//   for(row=1; row<=5; row++)
//   {
//     for(col=1; col<=6; col++)
//     {
//         if(row==1 || row==5 || col==1 ||col==6)
//         {
//             cout<<col;}
//         else
//         {cout<<" ";
//         }
//     }
//     cout<<endl;
//   }
// }
        // 123456
        // 1    6
        // 1    6
        // 1    6
        // 123456

// #include<iostream>
// using namespace std;
// int main () {
//     int row, col;
//     for(row=1; row<=5; row++)
//     {
//         for(col=1; col<=9; col++)
//         {
//             if(col+row==6 || col-row==4 || row==5)
//             {
//                 cout<<col;
//             }
//             else{ cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// output_iterator_tag
//     5    
//    4 6   
//   3   7  
//  2     8 
// 123456789
      
// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     int n=0;
//     for(row=0; row<=5; row++)
//     {
//         for(col=0; col<=row; col++)
//             {
//                 cout<<n+(++n)<<" ";
//             }
//         cout<<endl;
//     }}
//  output
      //   1
      //   35
      //   7911
      //   13151719


// #include<iostream>
// using namespace std;
// int main () {
//     int row,col;
//     for(row=1; row<=5; row++)
//     {
//         for(col=1;col<=5; col++)
//         {
//             cout<<col;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main () {
// int row,col,n;
// cout<<"enter a number: ";
// cin>>n;
// for(row=1; row<=n; row++)
// {
//   for(col=1; col<=n-row; col++)
//   {
//     cout<<" "; 
//     }
//     for(col=1; col<=row; col++)
//     {
//         cout<<col<<" ";
//     }
//     cout<<endl;
// }
//     }
// output
//     1 
//    1 2 
//   1 2 3 
//  1 2 3 4 
// 1 2 3 4 5 

// #include<iostream>
// using namespace std;
// int main () {
//   int row,col,num;
//   cout<<"enter number:";
//   cin>>num;
//   for(row=0;row<num; row++)
//   {  int n=1;
//     for(col=0; col<=num-row-1; col++)
//     {
//     cout<<" ";
//     }
//     for(int k=0; k<=row; k++)
//     {
//        cout<<n<<" ";
//       n=n*(row-k)/(k+1);
//     }
//     cout<<endl;
//   }
//   }

// output
//      1 
//     1 1 
//    1 2 1 
//   1 3 3 1 
//  1 4 6 4 1 

// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"enter a nnumber:";
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int n=5;
//     for(int i=1; i<=n; i++)
//      { 
//         for(int j=0; j<=n-i; j++)
//         {
//         cout<<" ";
//         }
//         for(int j=1; j<=i; j++)
//         {
//             cout<<"*";
//         }
//             cout<<endl;
//     }}

// #include<iostream>
// using namespace std;
// int main () {
// int n;
// cin>>n;
// for(int row=0; row<n; row++)
// {
//     for(int col=1; col<=n-row; col++)
//     {
//         cout<<" ";
//     }
//     for(int col=1; col<=(2*row-1); col++)
//     cout<<"*";
//     cout<<endl;
// }
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int n=5;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n-i; j++)
//         {
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main () {
    int n=6;
    for(int i=0; i<=n; i++)
    {
     for(int j=0; j<=n; j++)
        {
        if(i==0|| i==6  || j==0 )
        cout<<" *";
        }
        cout<<endl;
    }
}

