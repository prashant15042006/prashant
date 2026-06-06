// import java.util.*;
// public class sumofnterms {
//      public static void main(String[]args) {
//       for (int i= 0;)
//      }
// }

 public class array_reverce_number {
     static void Print(int []arr){
          for(int i = 0; i< arr.length; i++){
               System.out.print(arr[i] + " ");
               
          }
          System.out.println("");
     }
     static int[]  reverseArray(int [] arr  ){
          int n = arr.length;
          int left = 0 , right = n-1;
          while(left < right){
               int temp = arr[left];
               arr [left ] = arr[right];
               arr[right] = temp;
               left++;
               right--; 
          }
          return arr;
     }

     
         public static void main(String[]args) {
          
          // Scanner sc = new Scanner(System.in);
          // System.out.println("taking input from user ");
          // int n = sc.nextInt();
          // int [] arr = new int [n];
          // System.out.println("enter n value from user ");

          // for(int i = 0; i < n ; i++){
          //      arr[i] = sc.nextInt();

          // }
          int [] arr = {1,3,4,5,6,};

          System.out.println("original arr");
          Print(arr);

          System.out.println("reverse arr");
          reverseArray(arr);
          Print(arr);



         }
     }
