// #include<iostream>
// using namespace std;
// int main () {
//     int row,col,n; 
//     cout<<"enter a number :";
//     cin>>n;
//     for(row=1; row<=n; row++)
//     {

//         for(col=1; col<=n-row; col++)
//         {
//             cout<<" ";
//         }
//         for(col=1; col<=row;col++)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// } 

//out put
//     1 
//    2 2 
//   3 3 3 
//  4 4 4 4 
// 5 5 5 5 5 


// #include<iostream>
// using namespace  std;
// int main () {
//     int row,col,n;
//     cout<<"enter number :";
//     for(row=0; row<=5; row++)
//     {
//         char name='A'+(row-1);
//         for(col=0; col<=row-1; col++)
//         cout<<name<<" ";
//         cout<<endl;
//     }
// }

// output
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
 
// #include<iostream>
// using namespace std;
// int main () {
//     int row,col,n;
//     cout<<"ant number:";
//     cin>>n;
//     for(row=1; row<=n; row++)
//     {
//         char name = 'A'+(row-1);
//         for(col=1; col<=n-row; col++)
//         {
//             cout<<" ";
//         }
//         for(col=1; col<=row; col++)
//         {
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }

//    //output
//     A 
//    B B 
//   C C C 
//  D D D D 
// E E E E E

//   #include<iostream>
//   using namespace std;
//   int main () {
//     int row,col,n;
//     cout<<"enter value:";
//     cin>>n;
//     for(row=1; row<=n; row++)
//     {
//         for(col=1; col<=n-row; col++)
//         {
//             cout<<"  ";
//         }
//         for(col=1; col<=row; col++)
//         cout<<row<<"   ";
//         cout<<endl;
//     }
//    for(row=n; row>=1; row--)
//     {
//         for(col=1; col<=n-row; col++)
//         {
//             cout<<"  ";
//         }
//         for(col=1; col<=row; col++)
//         cout<<row<<"   ";
//         cout<<endl;
//     }
// }

//out put
//         1   
//       2   2   
//     3   3   3   
//   4   4   4   4   
// 5   5   5   5   5   
// 5   5   5   5   5   
//   4   4   4   4   
//     3   3   3   
//       2   2   
//         1   

// #include<iostream>
// using namespace std;
// int main () {
//     int row,col,n;
//     cout<<"enter a number :";
//     cin>>n;
//     for(row=1; row <=n; row++)
//     {
//         for(col=1; col<=n; col++)
//             cout<<'1'<<" "<<'0'<<" ";
//             cout<<endl;
//     }
// }

// output
// 1 0 1 0 1 0 1 0 1 0 
// 1 0 1 0 1 0 1 0 1 0 
// 1 0 1 0 1 0 1 0 1 0 
// 1 0 1 0 1 0 1 0 1 0 
// 1 0 1 0 1 0 1 0 1 0 

// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     // cout<<"enter your number:";
//     // cin>>n;
//     n=5;
//     int row,col;
//     for(row=0; row<5; row++){
//     for(col=0; col<5; col++){
//          char name = 'A'+(col-0);
//     if(row>0 && col > 0 && row < n-1 && col < n-1)
//         cout<<" ";
//     else
//     cout<<name;
//     }
//      cout<<endl;
//     }}
// output
// A   E
// A   E
// A   E
// ABCDE

// #include<iostream>
// using namespace std;
// int main () {
//     int n,i,j,k;
//     cout<<"enter a naumber:";
//     cin>>n;
//     for(i=0; i<n; i++)
//     {
//         for(j=0; j<n; j++)
// {
//     if(i==n-1 || i+j == n-1){
//           cout<<"*";
//        }
//     else
//             cout<<" ";         
// }
//  cout<<endl;
//     }}
// output
//    * 
//   *  
//  *   
// *****

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num = 5;
//     for (int i = 0; i < num; i++) {
//         for (int j = 0; j < 2 * (num - i) - 1; j++)
//            {
//             cout<<" ";
//         }
//         for (int k = 0; k < 2 * i + 1; k++)
//             {
//             if (k == 0 || k == 2 * i || i == num - 1) {
//                 cout<<"* ";
//             }
//             else {
//                 cout<<"  ";
//             }
//         }
//         cout<<"\n";
//     }
//     return 0;
// }  
//          * 
//        *   * 
//      *       * 
//    *           * 
//  * * * * * * * * * 

// #include<iostream>
// using namespace std;
// int main () {
//     int row,col;
//     int num =5;
//     for(row=0; row<num; row++)
//     {
//         for(col=0; col<9; col++)
//         {
//             if(col+row==4 || col-row==4 || row==num-1)
//             {
//                 cout<<"*";
//             }
//             else
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
//     *    
//    * *   
//   *   *  
//  *     * 
// *********

// #include<iostream>
// using namespace std;
// int main () {
//     int row,col;
//     for(row=1; row<=5; row++)
//     {
//         for(col=1; col<=10; col++)
//         { char name = 'A'+col-row;
//             if(row==col ||col+row==10 || row==1){
//                 cout<<name;
//             }
//             else
//                 cout<<" ";
//         }
//         cout<<endl;

//     }}
//     output_iterator_tag
// ABCDEFGHIJ
//  A     G  
//   A   E   
//    A C    
//     A  

// #include<iostream>
// using namespace std;
// int main () {
//     int row,col;
//     for(row=0; row<9; row++)
//     {
//         for(col=0; col<9; col++)
//         { 
//             if(row-col==4 ||row+col==12||row+col==4 || col-row==4){
//                 cout<<"*";
//             }
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }
// }
//output
                                    //     *    
                                    //    * *   
                                    //   *   *  
                                    //  *     * 
                                    // *       *
                                    //  *     * 
                                    //   *   *  
                                    //    * *   
                                    //     *  

// #include<iostream>
// using namespace std;
// int main () {
//     int row,col;
//     for(row=0; row<9; row++)
//     {
//         for(col=0; col<9; col++)
//         { //char name = 'A'+8-(2*col)-(2*row);
//         char name ='A'+row;
//             if(row-col==4 ||row+col==12||row+col==4 || col-row==4){
//                 cout<<name;
//             }
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int row,col;
//     for(row=0; row<9; row++)
//     {
//         for(col=0;col<9; col++)
//         {
//             if(row+col==8 || row==col || row==0 || row==8)
//             {
//                 cout<<"*";
//             }
//             else
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// output
// *********
//  *     * 
//   *   *  
//    * *   
//     *    
//    * *   
//   *   *  
//  *     * 
// *********


// #include<iostream>
// using namespace std;
// int main () {
//     int row,col;
//     for(row=0; row<9; row++)
//     {
//         for(col=0;col<9; col++)
//         {
//   char c;
//   //if(row=col && row+col==8)
//   //cout<<c;

//             if(row+col==8 || row==col || row==0 || row==8)
//             {
//                 cout<<row;
//             }
//             else
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// output_iterator_tag
// 000000000
//  1     1 
//   2   2  
//    3 3   
//     4    
//    5 5   
//   6   6  
//  7     7 
// 888888888

// #include<iostream>
// using namespace std;
// int main () {
// int row,col; 
// int n=1;
// for(row=0; row<5; row++)
// {
//     for(col=0; col<=row; col++)
//     {
//         cout<<n++<<" ";
//     }
//     cout<<endl;
// }
// }

// output_iterator_tag
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

// #include<iostream>
// using namespace std;
// int main () {
//     int row,col;
//     int n=0; char name ='A'+n;
//     for(row=1; row<5; row++)
//     {
//         for(col=1; col<=row; col++)
//         {
//             cout<<name++<<" ";
//         }
//         cout<<endl;
//     }
// }

// output_iterator_tag
// A 
// B C 
// D E F 
// G H I J 
#include<iostream>
using namespace std;
int main () {
    int row,col;
    int n;
    cin>>n;
    for(row=0; row<n; row++)
    { int num=1;
        for(col=0; col<n-row-1; col++)
        {
            cout<<" ";
        }
        for(int k=0; k<=row; k++){
        cout<<num<<" ";
      num=num*(row-k)/(k+1);
        }
        cout<<endl;
}
}
