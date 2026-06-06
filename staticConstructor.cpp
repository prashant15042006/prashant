#include<iostream>
using namespace std;
class customer 
{
    string name;
    int account;
    int balance;
    public:
    static int total_customer;
    customer(string name,int acccount,int balance)
    {
        this -> name = name;
        this -> account = account;
        this -> balance = balance;
        total_customer++;
    }
    void display ()
    {
        cout<<name<<"\n"<<account<<"\n"<<balance<<"\n"<<endl;
    }
    void display_total()
    {
       cout<<"total_customer"<<endl;
    }
};
      int customer::total_customer=0;

int main ()
{
    customer A1("prashant",1,1000);
    customer A2("rohit",2,1800);
    customer A3("chandan",3,5000);
   customer::total_customer = 5;
    A1.display();
    A2.display();
    A3.display();
}