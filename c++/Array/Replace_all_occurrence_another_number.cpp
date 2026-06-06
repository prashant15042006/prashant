#include<iostream>
using namespace std;
int main () {
   
    int arr[] = {1,2,2,2,2,3,4,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
     int target =2;
    int replace = 9;
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            arr[i] = replace;
        }
    }
    cout<<"update value :-"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" " ;
    }
    return 0;
}