// #include<stdio.h>
// void main () {
//  int i;
//  for(i = 1; i<=25; i++){
//     switch (i)
//     {
//         case 0 : i+=5;
//         case 1 : i+=3;
//         case 2 : i+=4;
//         default : i+= 5;
//         break;
//     }
//     printf("%d",i);
//     }
//  }

// #include<stdio.h>
// void main (){
//  for(int i=1; i<=5; i++)
//  {
//     for(int j=1; j<=i; j++)
//     printf("%d",j);
//     printf("\n");
//  }
// }
// output 
            // 1
            // 12
            // 123
            // 1234
            // 12345

            
// #include<stdio.h>
// void main (){
//  for(int i=1; i<=5; i++)
//  {
//     for(int j=1; j<=5-i; j++)
//         printf(" ");
//     for(int k=1; k<=i; k++)
//     printf("%d",k);
//     printf("\n");
//  }
// }  
         // output
        //     1
        //    12
        //   123
        //  1234
        // 12345

                   
#include<stdio.h>
void main (){
    int n = 5;
 for(int i=1; i<=n; i++)
 {
    for(int j=1; j<=i; j++)
        printf("%d",j);
    for(int j=1; j<=n-i; j++)
    printf("..");
    for(int j=i; j>=1; j--)
    printf("%d",j);
    printf("\n");
 }
}  
