#include<iostream>
using namespace std;
int main () {
int sum = 0;
int arr[] = {100,200,400,500};
int n = sizeof(arr) / sizeof(arr[0]);

for (int i = 0; i < n; i++) {
    sum += arr[i];
}
cout << "Sum of all elements: " << sum << endl;
return 0;
}

Check if an array contains a given number.