// #include <bits/stdc++.h>
// using namespace std;

// void solution() {
//     int N;
//     cin>>N;
//     vector<int> A(N);
//     for(int i=0; i< N; ++i){
//         cin>>A[i];
//     }
//     int ones = abs(accumulate(A.begin(), A.end(), 0));
//     if(ones & 1) {
//         cout<<-1 <<"\n";
//     }
//     else {
//         cout<<ones / 2<<"\n";
//     }
// }
// int main (){
//     int T;
//     cin >> T;
//     while(T--) solution();
//     return 0;
// }

// #include<iostream>
// using namespace std;
//  int main () {
//     string X;    //  input // 12 X 345 U 67
//      cout<<"enter a number:"<<endl;
//      cin>>X;
//      int arr[9];
//      for(int i=0; i<9; i++){
//         cin>>arr[i];
//         if(X == 'A' || X == 'E' || X == 'I'|| X == 'O' || X == 'U'){
//             cout<<"This is Invalid Code"<<endl;
//         }
//         else{
//         int   add = arr[i-1] + arr[i];
//             if(add % 2 == 0){
//                 cout<<"Even";
//             }
//         }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main () {
    
    for(int i=1; i<=10; i++){
     for(int f=1; f<=i; f++){
        for(int j=1; j<=5-i; j++)
            cout<<" ";
        for(int k=1; k<=i; k++)
            cout<<f<<k;
     }
        cout<<endl;
    }
}