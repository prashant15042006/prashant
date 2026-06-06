#include<iostream>
using namespace std;

class coustomer
{
    string name;
    int *data;

    public :

    coustomer ()
    {
    name = "4";
    cout<<"coustomer is "<<name<<endl;
    }
    coustomer (string name)
    {
        this -> name = name;
       cout<<"constructor is"<<name<<endl;
    }
    ~coustomer()
    {
        cout<<"deconstructor is"<<name<<endl;
    }
};

int main ()
{
    coustomer A1("1"),A2("2"),A3("3");
    coustomer *A4 = new coustomer;
  //  delete A4;
}