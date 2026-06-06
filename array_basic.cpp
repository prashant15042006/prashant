// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"enter a number";
//     cin>>n;
// int arr[n];                                 //output  5
//     for(int i=0; i<n; i++){                  //   input - 1 2 3 4 5
//         cin>>arr[i];                          //  output - 12345
// }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
                                                           
// #include<iostream>
// using namespace std;                               // same But enter inout number is some change 
// int main () {                                      //so that fix change to n = INT_MAX
//    int n;                                         // and all code are same into first code
//    cout<<"enter an number:";
//    cin>>n;
//    int arr[INT16_MAX];
//    for(int i=0; i<n; i++){
//       cin >>arr[i];
//    }
//    for(int i =0; i<n; i++){
//       cout<<arr[i];
//    }
// }

               
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[] = {1,2,3,5,5,6,8,9};
//     int n = sizeof (arr)/sizeof(arr[0]);
//     int x;
//     cout<<"enter number";
//     cin>>x;
//     bool flag = false;
//     for(int i=0; i<n; i++){
//         if(arr[i] == x) {
//             flag = true;
//             break;
//         }                                              // output
//     }                                                  // present number check in array element
//     if(flag == true){
//          cout<<x<<"is present";
//     }
// else{
//     cout<<x<<"is not present";
// }
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int sum=0;
//     // int n;
//     // cout<<"enter a number:";
//     // cin>>n;                                             // output
//     int arr[] = {2,4,6,7,8,9};                           // Adding array element
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }
//     cout<<sum<<endl;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"enter a number"<<endl;
//     cin>>n;
//     int sum=0;                                   // output
//  while(n != 0){                                   // Enter user input ans Adding number
//     int d =n % 10;
//     n = n/10;
//     sum = sum+d;
//  }
//  cout<<sum<<endl;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int arr[5] = {4,5,4};                        //output
//     for(int i=0; i<5; i++){                   // print number and any gaping number to add zero(0)
//     cout<<arr[i]<<endl;
// }
//  }


//  #include <bits/stdc++.h>
//  using namespace std;
//  int main() {
// //  int T;
// //  cin >> T;
// //  while(T--){
//      int n;
//      cin >> n;
//      if( n > 2 ){
//          cout<<"no"<<endl;
//      }
//      else{
//          for(int i=0; i<n; i++){
//              if(n%i == 0){
//                  cout<<"no"<<endl;
//              }
//               else{
//                  cout<<"yes"<<endl;}}
//          }
//    //  }
//  return 0;
 // }
 


//    #include<iostream>
// using namespace std;
// int main (){
//     int arr[] = {7,5,23,2,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int mx = INT16_MIN;                                        // output
//     int smx = INT16_MIN;                              // find max & min num   

//     for(int i=0; i<n; i++){                               
//        if(arr[i] > mx) {
//            smx = mx;                      // (Update second-largest before changing mx)
//            mx = arr[i];
//        } else if(arr[i] > smx && arr[i] != mx) { 
//            smx = arr[i];
//        }
//     }
//     cout << mx << " " << smx;
// }


// #include<iostream>
// using namespace std;
// int main () {                                                 //output
//    int arr[5] = {2,45,6,7,9};                                   // max num find
//   int n = sizeof(arr)/sizeof(arr[0]);
//    int mx = INT16_MIN;
//    for(int i=0; i<n; i++){
//       if(arr[i] > mx)
//           mx = arr[i];
//    }
//    cout<<mx;
// }

// #include<iostream>
// using namespace std;
// int main () {
//    int arr[5] = {2,5,6,8,886};
//    int n =  sizeof(arr)/sizeof(arr[0]);
//    int min  = INT16_MAX;                                // outout
//    for(int i=0; i<n; i++){                           // min num find
//       if(arr[i] < min){
//          min = arr[i];
//       }
//    }
//       cout<<min<<endl;
//    }


// #include<iostream>
// using namespace std;
// int main  () {
  
//   int arr[6] = {1,2,3,4,5,6};                     // output
//    int start = 0;                               // swap the number & (Reverse number)
//    int end = 5;
//    while(start < end){
//       swap(arr[start],arr[end]);
//       start++;
//       end--;
//    };
//    for(int i=0; i<6; i++){
//       cout<<arr[i]<<" ";
//    }
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     int arr[INT16_MAX];
//     for(int i=0; i<n; i++)
//     cin >> arr[i];
//     //int arr[6] = {1,2,3,4,5,6};            //  output
//     int start = 0;                                // swap the number in any element
//     int end = (n-1);
//     while(start < end){
//         swap(arr[start],arr[end]);
//         start++;
//       end--;
//     };
//     for(int i=0; i<n; i++){  
//         cout<<arr[i]<<" ";
//     }
// }


// #include<iostream>
// using namespace std;
// int main (){
//     int arr[6] = {2,5,3,7,12,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int mx = INT16_MIN;
//     int smx = INT16_MIN;                                 // output
//     int mmx = INT16_MIN;                                 // that code is three output 
//     for(int i=0; i<n; i++){                              //12 8 7  
//     if(arr[i] > mx){                                     // less down number
//         mmx = smx;
//         smx = mx;
//         mx = arr[i];
//     }
//     else if(arr[i] > smx && arr[i] != mx){
//          mmx = smx;
//         smx = arr[i];

//     }
//       else if(arr[i] > mmx && arr[i] != smx && arr[i] != mx){
//       mmx = arr[i];
//     }
// }
//     cout<<mx<<" "<<smx<<" "<<mmx;
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int sum = 0 ;                      // missing number find
//     int arr[] = {1,2,4,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
   
//     for(int i=0; i<n-1; i++){
      
//         sum += arr[i];
//     int ans = n*(n+1)/2;

//     cout<<ans-sum<<endl;
// }
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"enter a number";
//     cin >>n;                   // febunaic series
//     int arr[1000];
//     arr[0] = 0;
//     arr[1] = 1;
//     for(int i=2; i<= n-1; i++)
//     arr[i] = arr[i-1]+arr[i-2];

//     cout<<arr[n-1]<<" ";
// }

// #include<iostream>
// using namespace std;
// int main  () {
//     int x;
//     cin >>x;
//     int index = -1;
// int arr[5] = {1,2,3,4,5};              //  search element to find  

//  for(int i=0; i<5; i++){
//     if(arr[i] == x){
//         index = i;
//         break;
//     }
// }
//     if(index != -1){
//         cout<<"found at index:"<<index<<endl;
//     }else{
//         cout<<"no"<<endl;
//     } 
//     cout<<index<<endl;
//  }

