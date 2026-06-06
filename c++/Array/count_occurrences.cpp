
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,4,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int size = 0;
    int a = 2;
    for(int i=0; i<n; i++){
        if(arr[i] == a){
        size++;
    }
    }
    if(size > 0){
        cout<<"yes :"<<size<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}