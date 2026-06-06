// #include<stdio.h>
// int main () {
//    // int n;
//     // printf("enter a number :");
//     // scanf("%d", &n); 
//     for(int r=0; r<5; r++){
//         for(int c=0; c<5; c++){
//             if(r == 0 || r == 4 || c == 4 || c == 0){
//             printf("*");
//         }
//     }
//         printf("\n");
// }
//     return 0;
// }


#include<stdio.h>
int main () {
   // int n;
    // printf("Enter a number");
    // scanf("%d",&n);
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mn = __INT16_MAX__;
    for(int i=0; i<n; i++){
        if(arr[i] < mn){
        mn = arr[i];
        }
    }
        printf("min number : %d\n", mn);
    return 0;
}
