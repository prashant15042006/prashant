#include<iostream>
#include<vector>
#include<string>
using namespace std;
// int main ()
// {
//     char string [10],length =0;
//     for(int i=0;i<=10; i++)
//     {
//         cin>>string[i];
//         length++;
//     }
//     for(int i=length;i>=0;i--)
//     {
//         cout<<string[i];
//     }
//     return 0;
//     }


// #include<iostream>
// using namespace std;
// int main () {
//      char arr[9];
//      for(int i=0; i<9; i++)
//      cin>>arr[i];                  //simple string 
//      for(int i=0; i<9; i++){
//         cout<<arr[i];
//      }
// }


// #include<iostream>
// using namespace std;
// int main () {
// string id;
// cout<<"enter a number:";            // this code is accept the spce
// getline(cin,id);
// cout<<id<<endl;
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     string s1 ="prashant";
//     string s2 = "kumar";
//     cout<<s1+s2;
// }


// int main () {
//     string a;
//     getline(cin,a);
//     cout<<a<<endl;
//     cout<<a.size();
//     return 0;
// }


// int main () {
//     string s = "prashant";
//     int start = 0;
//     int end  = s.size()-1;
//     while(start < end){
//         swap(s[start],s[end]);
//         start++;
//         end--;
//     }
//     cout<<s;
// }


int main () {
  string  s = "abccccdd";
    vector<int>lower(26,0),upper(26,0);
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'a')
        lower[s[i]- 'a']++;
        else
        upper[s[i]-'A']++;
    }
    int count = 0;
    bool odd =0;
    for(int i=0; i<26; i++)
    {
        //lower
        if(lower[i]%2 == 0)
        count+=lower[i];
        else{
            count+=lower[i]-1;
            odd=1;
        }
        //upper
        if(upper[i]%2==0)
        count+=upper[i];
        else{
            count+=upper[i]-1;
            odd=1;
        }
    }
    cout<<count+odd<<endl;
    return 0;
}