#include<iostream>
using namespace std;
int main  () {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int a;
    cout<<"Enter a number";
    cin>>a;
    bool found = false;
    for(int i=0; i<n; i++){
        if(arr[i] == a){
            found = true;
            break;
        }}
        if(found){
            cout<<"yes number is parsent"<<endl;
        }
        else{
            cout<<"No number is not parssent"<<endl;
        }
    return 0;
}
