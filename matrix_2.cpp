// #include<iostream>
// using namespace std;
// int main () {
//     int matrix[3][3];
//     int n=3,m=3;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>matrix[i][j];
//         }
//     }
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 cout<<matrix[i][j]<<" ";
//             }
//         cout<<endl;
//     }
// }



#include<iostream>
using namespace std;
int main () {
    int a;
    cout<<"enter a number:";
    cin>>a;

    int matrix[a][a];
    int n=a,m=a;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>matrix[i][j];
        }
    }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
               if(i==1 || i==a || j==1 || j==a){
                cout<<matrix[i][j]<<" ";
               }
               else{
                cout<<" ";
               }
            }
        cout<<endl;
    }
}
