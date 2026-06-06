#include<iostream>
using  namespace std;
int main (){
    int sum = 0;
    int arr[] = {1,2,3,4,5};
    int k = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<k; i++){
    sum += arr[i];
  }
  cout<<"toatal sum of this array :"<< sum << endl;
  cout<<"Average number of array :"<< sum/k << endl;
return 0;
}