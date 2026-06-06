// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;


// int main () {
//      vector<vector<int>>matrix(3,vector<int>(4, 2));
//     //  for(int i=0; i<3; i++){
//     //     for(int j=0; j<4; j++){
//                                                         // difine row , col length
//           //  cout<<matrix[i][j]<<" ";
//             cout<<"row = "<<matrix.size();
//             cout<<endl;
//             cout<<"col = "<<matrix[0].size();
//     //     }
//     //  }
// }


// int main () {
//               int row,coloum;
//               cout<<"enter a number:";
//               cin>>row>>coloum;

//     vector<vector<int>>matrix(row,vector<int>(coloum));
//  for(int i=0; i<row; i++)
//  for(int j=0; j<coloum; j++)
//  cin>>matrix[i][j];

// for(int i=0; i<row; i++){
// for(int j=0; j<coloum; j++)
// cout<<matrix[i][j]<<" ";
//  cout<<endl; 
// }
// }

               // wave form


// int main (){
//     int arr[3][3] ={1,2,3,4,5,6,7,8,9};
//     // for(int i=0; i<3; i++)
//     // for(int j=0; j<3; j++)

//     for(int j=0; j<3; j++)                                 // wave form matrix
//         if(j % 2 == 0){
//             for(int i=0; i<3; i++)
//                 cout<<arr[i][j]<<" ";
//         }
//         else
//         for(int i = 3-1; i >= 0; i--)
//         cout<<arr[i][j]<<" ";
//         cout<<endl;
//         }


//  #include<iostream>
//  using namespace std;

// int main () {
// int matrix[5][5] = {
//     {1,2,3,4,5},
//     {6,7,8,9,2},
//     {1,2,3,4,5},
//     {2,3,4,5,6},
//     {2,3,4,5,6}
// };
//     int top =0;
//     int right = 4;                      //sprial matrix
//     int left = 0;
//     int bottom = 4;
//     while(top <= bottom && left <= right){

//      // print top
//     for(int j=left; j <= right; j++)
//     cout<<matrix[top][j]<<" ";
//     top++;

//     //print right
//     for(int i=top; i<= bottom; i++)
//     cout<<matrix[i][right]<<" ";
//     right--;
    
//     // print bottom
//     if(top <= bottom){
//         for(int j=right; j>=left; j--)
//         cout<<matrix[bottom][j]<<" ";
//         bottom--; 
//     }
//     // print left
//         if(left <= right){
//         for(int i=bottom; i>=top; i--)
//         cout<<matrix[i][left]<<" ";
//         left++;
//     }                   
//     }
//     return 0;
// }


//  #include<iostream>
//  using namespace std;
//  int main () {
//     int arr[5][5] = {
//          {1,2,3,4,5},
//          {1,2,3,4,5},
//          {1,2,3,4,5},
//          {1,2,3,4,5},
//          {1,2,3,4,5}
//  };
//  for(int i=0; i<5-1; i++)
//  for(int j=i+1; j<5; j++)
//    swap(arr[j][i],arr[i][j]);
//  cout<<arr[j][i];
//  }



// int main (){
// int row = 3;
// int col = 3;
//  vector<vector<int>>matirx(row,vector<int>(col));
//  int matrix[3][3] = {{1,2,3,4,5},
//                     {2,3,4,5,5},
//                     {3,4,8,7,3}};
//  for(int i=0; i<row-1; i++)
//  for(int j=i+1; j<col; j++)
//  swap(matrix[i][j],matrix[j][i]);
//  cout<<matrix[i][j];
// }

