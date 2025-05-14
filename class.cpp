#include<iostream>
using namespace std;
class emp
{
    public :
    
    int id;
    string name;
    string add;

emp ()
{
    id = 23;
    name = "prashant";
    add = "bhopal";
}
 void display ()
{
    cout<<"id"<<id<<"name"<<name<<"add"<<add<<endl;
}
 };
    int main ()
    {
    emp e;
    e.display ();
}

//friend function.

// #include<iostream>
// using namespace std;
// class a
// {
//     private:
//     int x,y,z;
//     a(int x,int y,int z)
//     {
//         this -> =x;
//         this -> y=y;
//         this -> z=z;
//     }
//         void show() {
//             cout<<x<<" "<<y<<" "<<z;
//         }
//     test operator (test t2)
//     test t3;
//     {
//         t3.x=x+t2x;
//         t3.y=y+t2y;
//         t3.z=z+t2z;
//     }};
//         int main () {
//             test t1(5,2,3)
//            // test t2(3,4,5);
//             //t3=t1+t2;
//             t1.show()
//             return 0;
//         }