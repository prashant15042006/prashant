// #include<iostream>
// using namespace std;
// int main () {
//     int arr[5] = {2,4,1,3,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n-1; i++){
//      int index = i;                                 // selection shorting
//    for(int j=i+1; j<n; j++){
//     if(arr[j] > arr[index])
//     index = j;
// }
//   swap(arr[index] , arr[i]);
// }
// cout<<"shorted array ";
// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int arr[1000];                                     // selection shorting
//     int n; 
//     cout<<"enter the size of array: ";
//     cin >>n;
//     cout<<"enter the element :";
//     for(int i=0; i<n; i++){ 
//         cin >>arr[i];
//     }
//     for(int i=0; i<n-1; i++){
//          int index = i;
//     for(int j=i+1; j<n; j++){
//         if(arr[j] < arr[index])
//             index = j;
//         }
//         swap(arr[i] , arr[index]);
//     }    
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

