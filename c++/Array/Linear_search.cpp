#include<iostream>
using namespace std;
int main () {
    int a;
    cout<<"Find a number :";
    cin>>a;
    int arr[] = {1,2,3,44};
    int n = sizeof(arr)/sizeof(arr[0]);
        bool found = false;
    for(int i=0; i<n; i++){
        if(a == arr[i]){
    found = true;
    break;
    }
    }
    if(found){
            cout<<"yes";
    }
        else{
            cout<<"NO";
        }
    }