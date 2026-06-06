#include<iostream>
using namespace std;
int main () {
    int arr[] = {1,2,3,4,2,2,4,5,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int evencount = 0;
    int oddcount = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
      evencount++;
        }
        else{
        oddcount++;
        }
    }
        cout<<"Total even number is :"<<evencount<<endl;
        cout<<"Total odd number is:"<<oddcount<<endl;
}