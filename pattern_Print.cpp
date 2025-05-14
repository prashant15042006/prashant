

// #include<iostream>
// using namespace std;
// int main () {
//     int i,j;
//     for(i=1; i<=5; i++)
//     {
//         for(j=0; j<=5; j++)
//         {
//             cout<<"*"<<"";
//         }
//         cout<<endl;
//     }
// }

// output
// ******
// ******
// ******
// ******
// ******


// #include<iostream>
// using namespace std;
// int main () {
//     int i,j;
//     for(i=1; i<=5; i++)
//     {
//         for(j=0; j<=5; j++)
//         {
//             cout<<i<<"";
//         }
//         cout<<endl;
//     }
// }

// output
// 111111
// 222222
// 333333
// 444444
// 555555


// #include<iostream>
// using namespace std;
// int main () {
//     int i,j;
//     for(i=1; i<=5; i++)
//     {
//         for(j=0; j<=5; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// output
// 0 1 2 3 4 5 
// 0 1 2 3 4 5 
// 0 1 2 3 4 5 
// 0 1 2 3 4 5 
// 0 1 2 3 4 5


// #include<iostream>
// using namespace std;
// int main () {
//     int i,j;
//     for(i=1; i<=5; i++)
//     {
//         for(j=5; j>=1; j--)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// output
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1

// #include<iostream>
// using namespace std;
// int main () {
//     int i,j;
//     for(i=1; i<=5; i++)
//     {
//         for(j=1; j<=5; j++)
//         {
//             cout<<j*j<<"  ";
//         }
//         cout<<endl;
//     }
// }

// output
// 1  4  9  16  25  
// 1  4  9  16  25  
// 1  4  9  16  25  
// 1  4  9  16  25  
// 1  4  9  16  25  


// #include<iostream>
// using namespace std;
// int main () {
//     char row,col;
//     for(row=1; row<=5; row++)
//     {
//         for(col='a'; col<='e'; col++)
//         cout<<col<<"  ";
//         cout<<endl;
//     }
// }

// output
// a  b  c  d  e  
// a  b  c  d  e  
// a  b  c  d  e  
// a  b  c  d  e  
// a  b  c  d  e  


// #include<iostream>
// using namespace std;
// int main () {
//     int row,col;
//     for(row=1;row<=5;row++)
//     {
//         char name = 'a'+row-1;
//         for(col=1; col<=5; col++)
//         cout<<name<<" ";
//         cout<<endl;
//     }
// }

//output
// a a a a a 
// b b b b b 
// c c c c c 
// d d d d d 
// e e e e e 
 
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int row,col;
//     for(row=1; row<=5; row++)
//     {
//         for(col=row; col<=5; col++)
//     cout<<row+col<<" ";
//     cout<<endl;
//     }
// }
// output
// 2 3 4 5 6 
// 4 5 6 7 
// 6 7 8 
// 8 9 
// 10 


// #include<iostream>
// using namespace std;
// int main ()
//     {
// int n, s, i, j;
// cout << "Enter number of rows: ";
// cin >> n;
// for(i = 1; i <= n; i++)
// {
// //for loop to put space
// for(s = i; s < n; s++)
// cout << " ";
// //for loop for displaying star
// for(j = 1; j <= i; j++)
// cout << "* ";
// // ending line after each row
// cout << "\n";
// }
// }
// output
//    * 
//   * * 
//  * * * 
// * * * * 


// #include<iostream>
// using namespace std;
// int main () {
//     for(int row=1; row<=5; row++)
//     {
//         for(int col=1; col<=row; col++)
//             cout<<"*"<<" ";
//             cout<<endl;
//         }
//     } 
//     output
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 


// #include<iostream>
// using namespace std;
// int main () {
//     int col;
//     for(int row=1; row<=5;  row++)
//     {
//         for(int col=1 ;col<=row; col++)
//         cout<<" "<<"*";
//         cout<<endl;
//     }
// }

// output
//  *
//  * *
//  * * *
//  * * * *
//  * * * * *


// #include<iostream>
// using namespace std;
// int main () {
//     for(int row=1; row<=5; row++)
//     {
//         for(int col=1; col<=row; col++)
//         cout<<col<<"";
//         cout<<endl;
//     }
// }

// output
// 1
// 12
// 123
// 1234
// 12345

// #include<iostream>
// using namespace std;
// int main () {
//     for(int row=1; row<=5; row++)
//     {
//         for(int col=1; col<=row; col++)
//         cout<<row<<" ";
//         cout<<endl;
//     }
// }

// output
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

// #include<iostream>
// using namespace std;
// int main () {
//     for(int row=1; row<=5; row++) 
//     {
//         for(int col=row; col>=1; col--)
//         cout<<col<<" ";
//         cout<<endl;
//     }
// }

// output
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 

// #include<iostream>
// using namespace std;
// int main () {
//     for(int row=1; row<=5;row++)
//     {
//         char name ='a'+row-1;
//         for(int col=1; col<=row;col++)
//         cout<<name<<" ";
//         cout<<endl;
//     }
// }

// output
// a 
// b b 
// c c c 
// d d d d 
// e e e e e 

// #include<iostream>
// using namespace std;
// int main () {
//     for(int row=1; row<=5; row++)
//     {
//         for(int col=1; col<=(6-row); col++)
//         cout<<"*"<<" ";
//         cout<<endl;
//     }
// }

// output
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

// #include<iostream>
// using namespace std;
// int main ()
// {
// for(int row=5; row>=1; row--)
// {
//     for(int col=1; col<=row; col++)
//     cout<<"*"<<" ";
//     cout<<endl;
// }
// }

// output
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

// #include<iostream>
// using namespace std;
// int main () {
//     for(int row=5;row>=1;row--)
//     {
//         for(int col=1;col<=row; col++)
//         cout<<col<<" ";
//         cout<<endl;
//     }
// }

// output
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 


// #include<iostream>
// using namespace  std;
// int main () {
//     for(int row=5; row>=1; row--)
//     {
//         //char name='a'+(row+1);
//         for(int col=1; col<=(row-1); col++)
//         cout<<col<<" ";
//         cout<<endl;
//     }
// }

// output
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"enter number:";
//     cin>>n;
// for(int row=1; row<=n; row++)
// {
//     for(int col=1;col<=n-row; col++)
//     cout<<" ";
//    for(int col=1; col<=row; col++)
//    {
//     cout<<"*";
//    }
//     cout<<endl;
// }
// }

// output
//     *
//    **
//   ***
//  ****
// *****


// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"enter number:";
//     cin>>n;
//  for(int row=1; row<=n; row++)
// {
//     for(int col=1; col<=(n-row);col++)
//     cout<<" ";
//     for(int col=1; col<=row; col++)
//     cout<<row;
//     cout<<endl;
// }
// }

// output
//     1
//    22
//   333
//  4444
// 55555


// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter number:";
//     cin>>n;
//     for(int row=1;row<=n; row++)
//     {
//         for(int col=1; col<=n-row; col++)
//         cout<<" ";
//         for(int col=1; col<=row; col++)
//         cout<<col;
//         cout<<endl;
//     }
// }

// output
//     1
//    12
//   123
//  1234
// 12345

// #include<iostream>
// using namespace std;
// int main () {
//     for(int row=1; row<=5; row++)
//     {
//         char name = 'A'+(row-1);
//         for(int col=1; col<=5-row; col++)
//         cout<<" ";
//             for(int col=1; col<=row; col++)
//             cout<<name;
//             cout<<endl;
//         }
//     }
//     output
//     A
//    BB
//   CCC
//  DDDD
// EEEEE


#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter  a number:";
    cin>>n;
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n-row; col++)
        {
            cout<<"  ";
            }
            for(int col=1; col<=(2*row-1); col++)
            cout<<"*"<<" ";
            cout<<endl;
        }
    }
   // output
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 


// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"enter your number: ";
//     cin>>n;
//     for(int row=1;row<=n;row++)
//     {
//         for(int col=1; col<=n-row; col++)
//         {
//             cout<<"  ";
//         }
//         for(int col=1; col<=row; col++)
//         cout<<col<<" ";
//         for(int col=row-1; col>=1;col--)
//         cout<<col<<" ";
//         cout<<endl;
//     }
// }
// output
//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1  

// #include<iostream>
// using namespace std;
// int main () 
// {
//     int col,row,n;
// cout<<"enter a input :";
// cin>>n;
// for(row=n; row>=1; row=row-1)
// {
//     for(col=1; col<=n-row;col=col+1)
//     cout<<"  ";
//     for(col=1; col<=2*row-1; col=col+1)
//     cout<<"* ";
//     cout<<endl;
// }
// }
// output
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 


// #include<iostream>
// using namespace std;
// int main () {
//     int row,col,n;
//     cout<<"enter  a number:";
//     cin>>n;
//     for(row=n;row>=1; row--)
//     {
//         for(col=1; col<=row; col++)
//         cout<<"* ";
//         for(col=1; col<=2*n-2*row; col++)
//         cout<<"  ";
//         for(col=1; col<=row; col++)
//         cout<<"* ";
//         cout<<endl;
//     }
//     for(row=1;row<=n; row++)
//     {
//         for(col=1; col<=row; col++)
//         cout<<"* ";
//         for(col=1; col<=2*n-2*row; col++)
//         cout<<"  ";
//         for(col=1; col<=row; col++)
//         cout<<"* ";
//         cout<<endl;
//     }
// }
// output
// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 
// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * * 

//                     piramid upar lower


// #include<iostream>
// using namespace std;
// int main () {
//     int row,col,n;
//     cout<<"enter any number :";
//     cin>>n;
//     for(row=1; row<=n; row++)
//     {
//         for(col=1; col<=n-row; col++)
//         {
//             cout<<" ";
//         }
//         for(col=1; col<=row; col++)
//         {
//             cout<<"* ";
//         }
//             cout<<endl;
//     }
//     for(row=n; row>=1; row--)
//     {
//         for(col=1; col<=n-row; col++)
//         {
//             cout<<" ";
//         }
//         for(col=1; col<=row; col++)
//         {
//             cout<<"* ";
//         }
//             cout<<endl;
//     }
// }
// output
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 

// // //                   180 rotate piramid
// #include<iostream>
// using namespace std;
// int main () {
//     int row,col,n;
//     cout<<"enter value: ";
//     cin>>n;
//     for(row=n; row>=1; row--)
//     {
//         for(col=1; col<=n-row; col++)
//         {
//             cout<<" ";
//         }
//         for(col=1; col<=row; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//}

//output
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 



