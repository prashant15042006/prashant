#include<iostream>
using namespace std;
int main () {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx ,mn;
    mx = INT16_MIN;
    mn = INT16_MAX;
   for(int i=0; i<n; i++){
    mx = max(mx,arr[i]);
    mn = min(mn,arr[i]);
   }
   cout<<"largest number"<< mx <<endl;
   cout<<"min number"<< mn <<endl;
   return 0;
}
