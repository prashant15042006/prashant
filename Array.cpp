// #include<iostream>
// using namespace std;
// int main () {
// int arr[5];
// arr[0] =1;
// arr[1] =2;
// arr[2] =3;
// arr[3] =4;
// arr[4] =5;
// cout<<arr[2]<<endl;
// cout<<arr[3]<<endl;
// arr[2] = 90;
// cout<<arr[2]<<endl;
// }


// #include<iostream>
// using namespace std;
// int main () {
// int arr[4];
// for(int i=0; i<=4; i++)
// {
//    cin>>arr[i];
// }
// for (int i=0; i<=4; i++)
// {
//    cout<<arr[i]<<" ";
// }
// }


// //it is print to alternative number.
// #include<iostream>
// using namespace std;
// int main () {
// int n;
// cout<<"enter a number:";
// cin>>n;
// int arr[n];
// for(int i=0; i<n; i++)
// {
//    cin>>arr[i];
// }
// for(int i=0; i<n; i+=2)
// {
//    cout<<arr[i]<<" ";
// }
// }


// #include<iostream>
// using namespace std;
//  int main () {
//     int arr[] ={12,2,34,5,56,7,78,7};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int sum= 0;
//     for(int i=0; i<n; i++)
//     {
//         sum += arr[i];
//     }
//     cout<<sum;
//  }

// #include<iostream>
// using namespace std;
//  int main () {
//     int arr[] ={12,2,7};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int product =1;
//     for(int i=0; i<n; i++)
//     {
//         product *= arr[i];
//     }
//     cout<<product;
//  }


// #include<iostream>
// using namespace std;
// int main () {
//     int arr[] = {2,4,5,7,8,9};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int x;
//     cout<<"enter number:";
//     cin>>x;
//     bool flag = false;
//     for(int i=0; i<n; i++){
//         if(arr[i]==x) {
//             flag = true;
//             break;
//         }}
//         if(flag==true)
//             cout<<x <<" is present";
//         else
//             cout<<x << "is not present";
//     }
    

// #include<iostream>
// using namespace std;
// int main () {
//     int arr[] = {2,4,5,7,809,9};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int mx = -10000000;
//     int mn = 100000000;
//     for(int i=0; i<n; i++)
//     {
//         mx=max(mx,arr[i]);
//         mn=min(mn,arr[i]);
//     } 
//     cout<<mx<<" "<<mn;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int arr[] ={34,45,444,11,27};
//     int n = sizeof(arr)/sizeof(arr[0]);
//   //  int mx= arr[0];
//    // int smx= arr[0];
//    // int mn = arr[0];
//    int mx=INT16_MIN;
//    int mn=INT16_MAX;
//    int smx =INT16_MIN;
//  for(int i=0; i<n; i++)
//  { 
//     if(mx < arr[i])  mx = arr[i];   
//  }
//  for(int i=0; i<n; i++)
//  {
//     if(smx < arr[i] && arr[i] != mx) smx=arr[i];
//  }
//  for(int j=0; j<n; j++) {
//     if(mn > arr[j]) mn = arr[j];
    
//  }
//     cout<<"first largest number"<<mx<<endl;
//     cout<<"seond largest number"<<smx<<endl;
//     cout<<"first minumum number"<<mn<<endl;
// }


// #include<iostream>
// using namespace std;
// int main () {
// int arr[] ={1,2,9,5,7,18,45,10};
// int n = sizeof(arr)/sizeof (arr[0]);
// int mx,mn;
// mx=INT16_MIN;
// mn=INT16_MAX;
// for(int i=0; i<n; i++){
//    mx=max(mx,arr[i]);
//    mn=min(mn,arr[i]);}
//    cout<<"largest value"<<mx<<endl;
//    cout<<"smallest value"<<mn<<endl;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main  () {
//    vector<char> v={'a','b','c','d','e'};
//    cout<<v[3]<<endl;
//    cout<<v[2]<<endl;
//    cout<<v[1]<<endl;
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"enter a number:";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     cin>>arr[i];
//     for(int i>n; i=0; i--)
//     cout<<arr[i];
// }
