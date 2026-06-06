// #include<iostream>
// using namespace std;
// int main () {
//     int arr1[3][4] = {1,3,5,3,6,7,8,9,5,4,2,1}; 
//     int arr2[3][4] = {1,4,6,4,6,4,2,7,4,6,7,3};
//     int arr3[3][4] = {2,5,6,8,45,3,2,4,3,3,2,1};
//     int ans[3][4];
//     for(int i=0; i<3; i++)
//         for(int j=0; j<4; j++){                       // add the array num
//          ans[i][j] = arr1[i][j] + arr2[i][j] + arr3[i][j];       
//         }
    
//     for(int i=0; i<3; i++)
//         for(int j=0; j<4; j++){
//     cout<<ans[i][j]<<endl;

//     }}


// #include<iostream>
// using namespace std;
// int main (){
//     int sum = INT16_MIN;
//     int index = -1;
//     int arr1[3][4] = {
//         {1, 3, 122, 3},
//         {6, 7, 8, 9},
//         {5, 4, 2, 1}
//     };                                // print row index with max sum

//     for(int i = 0; i < 3; i++){
//         int total = 1;
//         for(int j = 0; j < 4; j++) {
//             total += arr1[i][j];
//         }
//         if(sum < total){
//             sum = total;
//             index = i;
//         }
//     }

//     cout <<"row -> " << index << endl;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 2, 4, 5};  // Array
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int count[100] = {0};               // Count store karne ke liye array

//     // Har element ka count badhayein
//     for (int i = 0; i < size; i++) {
//         count[arr[i]]++;
//     }

//     // Sirf ek baar aane wale elements print karein
//     for (int i = 0; i < size; i++) {
//         if (count[arr[i]] == 1) {
//             cout << arr[i] << " ";
//         }
//     }

//     return 0;




// #include<iostream>
// using namespace std;
// int main () {
//     int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
//     int n = 3;
//     // Reverse each row
//     for(int i = 0; i < n; i++) {
//         int start = 0;
//         int end = n - 1;
//         while(start < end) {
//             swap(arr[i][start], arr[i][end]);
//             start++;
//             end--;
//         }
//     }                                                  // reverse each row of matrix(swaping method)
//     // Print the matrix after reversing each row
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
// //    int  rows = 3;
// //     int col = 4;
//    vector<vector<int>>matrix = {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
//    };
//     // vector<vector<int>>matrix;
//     // vector<vector<int>>matrix(rows,vector<int>(col, 0));
//     for(int i=0; i <matrix.size(); i++){
//         for(int j=0; j<matrix[i].size(); j++)
//         cout<< matrix[i][j]<<" ";
//     }
//     cout<<endl;
// }


// #include<iostream>
// using namespace std;
// int main () {
// int matrix[4][4] = {
//      {1,2,3,4},
//      {5,6,7,8},               // reverse each row of matrix(loop method)
//      {9,10,11,12},
//      {13,14,15,16}
// };
//     for(int i=0; i<4; i++){
//     for(int j=0; j<4; j++){
//        matrix[i][j];
//     }                                             
// }
// for(int j=3; j>=0; j--){
//     for(int  i=0; i<4; i++){
//         cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }


// #include<iostream>
// using namespace std;
// int main() {
//     int matrix[3][3] = {
//          {1,2,3},
//          {4,5,6},
//          {7,8,9}
//     };

//     // Step 1: Transpose the matrix                 //  transpose the matrix
//     for(int i = 0; i < 3; i++) {
//         for(int j = i + 1; j < 3; j++) {
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }

//     // Step 2: Reverse each row
//     for(int i = 0; i < 3; i++) {
//         int start = 0;
//         int end = 2;
//         while(start < end) {
//             swap(matrix[i][start], matrix[i][end]);
//             start++;
//             end--;
//         }
//     }

//     // Output the rotated matrix
//     cout << "Rotated matrix:" << endl;
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



    // #include<iostream>
    // using namespace std;
    // int main () {
    //     int index =-1;
    //     int x;
    //     cout<<"enter a number:";
    //     cin >>x;
    //     int arr[5][5] = {
    //         {2,6,10,14,18},
    //         {20,24,27,29,38},
    //         {47,52,78,93,102},
    //         {105,111,200,218,320}
    //     };
    //     for(int i=0; i<4; i++){
    //     for(int j=0; j<5; j++){               // Find search element
        
    //     if(arr[i][j] == x)
    //     index = i;
    //     }
    // }
    //     if(index != -1){
    //         cout<<"yes"<<endl;
    //     }
    //     else{
    //         cout<<"no"<<endl;
    //     }
    //     return 0;
    // }


// #include<iostream>
// using namespace std;
// int main () {
//     int x;
//     cout<<"enter a number:";
//     cin >>x;
//     int m = 5;
//     int N = 4;
//     int start = 0; 
//     int end = N*m-1;

//     int matrix[4][5] = {
//         {2,6,10,14,18},
//         {20,24,27,29,38},
//         {47,2,78,93,102},
//         {108,111,200,218,320}
//     };
//     while(start <= end){
//         int  mid = (start+end)/2;                 // seacrch element in array 
//         int row_index = mid / m;
//         int col_index = mid % m;
//         if(matrix[row_index][col_index] == x){
//         cout<<"Yes this number is hear"<<endl;
//         return 0;
//         }
//         else if(matrix[row_index][col_index] < x){
//         start = mid + 1;
//         } else {
//         end = mid-1;
//         }
//     }
//     cout<<" No "<<endl;
//         return 0;
//     }

