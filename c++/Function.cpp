// #include<iostream>
// using namespace std;
//  void system () {
//     cout<<"hello";
//  }
//  int main () {                    // simple code
//     system();
//     return 0;
//  }


// #include<iostream>
// using namespace std;

//     int system(){
//         cout<<"Hello world \n";
//         return  3;
//     }
//     int main () {
//     int val = system();
//     cout<<"value = "<<val;
//                       //2nd approch. //cout<<system()<<endl;
//     return 0;
//  }


// #include<iostream>
// using namespace std;
//     int sum(int a, int b){
//         int s = (a+b);
//         return s;
//     }                                 //  sum of two numer
//     int main () {
//         cout<<sum(10,22)<<endl;
//         return 0;
//     }

 
// #include<iostream>
// using  namespace std;
// int minOfTwo(int a, int b){
//     if(a <b){
//         return a;
//     }
//     else{
//         return b;
//     }                               //  find minimum number 
// }
// int main (){
//     cout<<" min of "<<minOfTwo(5,2)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int sumN(int a){
//     int sum = 1;
//     for(int i=1; i<=a; i++){
//         sum *= i;
//     }
//     return sum;                        // total sum
// }
// int main () {
//     cout<<"Total sum is :"<<sumN(5)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int digitN(int num){
//     int sum = 0;

//     while(num > 0){                    // calculate digit sum
//     int remender = num % 10;
//       num /= 10;
//      sum += remender;
//     }
//     return sum;
// }
// int main () {
//     cout<<"total sum "<<digitN(14527 )<<endl;
//     return 0;
// }


//  #include<iostream>
//  using namespace std;
//   int binomial(int n , int r){
//     int num = 1;
//     int rum = 1;
//     int negative = n-r;
//     int neg = 1;
//     for(int i=1; i<=n; i++){
//      num *= i;                             // n 
//   }                                        //  C           bionomial cofficent
//   for(int j=1; j<=r; j++){                 //   r
//     rum *= j;
//   }
//   for(int k=1; k<=negative; k++){
//       neg *= k;
//   }
//   int c = num /(rum * neg);
//   return c;
//   }
// int main () {
//   cout<<"nCr = "<<binomial(8 , 2)<<endl;
//   return 0;
// }


#include <iostream>
using namespace std;

bool Prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    if (Prime(n)) {
        cout << "Prime number";
    } else {
        cout << "Not prime";
    }
    return 0;
}