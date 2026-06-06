#include<iostream>
using namespace std;
class student
{
    protected :
    int a;
    public:
        void inputa()
        {
        cout<<"enter a number:";
        cin>>a;
    }
};
class employe:public student
{
    protected :
    int b;
    public :
        void inputb()
        {
        cout<<"enter a number:";
        cin>>b;
    }
    };
   class total : public employe
   {
    int sum;
    public :
        void sumvalue()
        {
        sum=a+b;
        cout<<"sum="<<sum;
    }
   };
   int main ()
   {
    total d;
    d.inputa();
    d.inputb();
    d.sumvalue();
    return 0;
    }