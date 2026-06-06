#include<iostream>
using namespace std;
int main (){
int arr1[] = {1,2,3,4,111,5,6,7};
int n = sizeof(arr1)/sizeof(arr1[0]);

int arr2[10];
for(int i=0; i<n; i++){
    if(arr2[i] == arr1[i]){ 
    }
}
for(int i=0; i<n; i++){
   cout<<arr1[i]<<" ";
}
return 0;
}