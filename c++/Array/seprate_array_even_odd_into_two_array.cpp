#include<iostream>
using namespace std;
int main () {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int even[10],odd[10];
    int e = 0, o = 0;

    for(int i=0; i<n; i++){
       if(arr[i] % 2 == 0 ){
         even[e++] = arr[i];
           }
           else{
         odd[o++] = arr[i];
           }
        }            // Print even number
           cout<<"Even number: ";
           for(int i=0; i<e; i++){
            cout<<even[i]<<" ";
          }
          cout<<endl;        // Print Odd number
    cout<<"Odd nummber: ";
    for(int i=0; i<o; i++){
        cout<<odd[i]<<" ";
    }

    return 0;
}