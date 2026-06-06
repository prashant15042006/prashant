
/*
#include <iostream>
using namespace std;
int main () {
    int marks;
cout<<"enter your marks :"<<endl;
cin>>marks;
if(marks>=33)
{
    cout<<"pass";
}
else{
    cout<<"fail";
}
}

#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cout<<"enter value of a :";
    cin>>a;
    cout<<"enter value of b :";
    cin>>b;
    if(a>b)
    {
        cout<<"a is greater then b";
    }
    else 
    {
        cout<<"a less then b";
    }
}


#include<iostream>
using namespace std;
int main ()
{
    int number;
    cout<<"enter your number:";
    cin>>number;
    if(number%2==0)
    {
        cout<<"even";
    }
        else if(number%2!=0)
        {
            cout<<"odd";
        }
        else
        {
            cout<<"alphabate";
        }
    }


#include<iostream>
using namespace std;
int main ()
{
    int age;
    cout<<"enter your age :";
    cin>>age;
    if(age<18)
    {
        cout<<"tenager";
    }
    else{
        cout<<"adult";
        cout<<"you can drive the car";
    }
}


#include<iostream>
using namespace std;
int main ()
{
    int number;
    cout<<"enter your number:";
    cin>>number;
    if(number>0)
    {
        cout<<"positive";
    }
    else if(number<0)
    {
        cout<<"negative";
    }
    else if(number==0)
    {
        cout<<"zero";
    }
    else{
        cout<<"Alphabate";
    }
}


#include<iostream>
using namespace std;
int main ()
{
    char alp;
    cout<<"enter any digit:";
    cin>>alp;
    if(alp =='a'|| alp =='A')
    {
        cout<<"voble";
    }
    else if(alp =='e'|| alp=='E')
    {
        cout<<"voble";
    }else if(alp =='i'||alp =='I')
    {
        cout<<"voble";
    }else if(alp =='o'||alp=='O')
    {
        cout<<"voble";
    }else if(alp =='u'||alp=='U')
    {
        cout<<"voble";
    }
    else{
        cout<<"consonent";
    }
    }


   #include<iostream>
   using namespace std;
   int main () {
    int number;
   cout<<"enter any number :";
   cin>>number;
   if(number==1)
    {
        cout<<"monday";
    }
    else if(number==2)
    {
        cout<<"tuesday";
    }else if(number==3)
    {
        cout<<"wednesday";
    }else if(number==4)
    {
        cout<<"thrusday";
    }else if(number==5)
    {
        cout<<"friday";
    }else if(number==6)
    {
        cout<<"saturday";
    }else if(number==7)
    {
        cout<<"sunday";
    }
   }

// write the number to square them 
#include<iostream>
using namespace std;
int main ()
{
    int number; 
    for(number=0; number<=10; number++)
    {
        cout<<number<<" prashant"<<"= "<<number*number<<endl;
    }
}

//n even number are the print 
#include<iostream>
using namespace std;
int main () 
{
    int number;
    cout<<"enter number:";
    cin>>number;
    for(int i=2; i<=number; i=i+2)
    {
        cout<<i<<endl;
    }
}

#include<iostream>
using namespace std;
int main ()
{
    int number;
    cout<<"enter number :";
    cin>>number;
    cout<<"all add number : "<<number*(number+1)/2<<endl;
}

#include<iostream>
using namespace std;
int main ()
{
    int n,b,a;
    cout<<"any number :"<<endl;
    cin>>b;
    a=b*2;
    n=a*(a+1)/2;
     cout<<"square valu to add number :"<<n<<endl;
}

*/
#include<iostream>
using namespace std;
int main () {
int n;
cout<<"enter number :";
cin>>n;
if(n<2)
{
    cout<<"not prime"<<endl;
    return 0;
}
else
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
        return 0;
        }
    }
            cout<<"prime number";
        }
    }




























