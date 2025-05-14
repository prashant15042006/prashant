// #include<iostream>
// using namespace std;
// class fruit
// {
//     public:
//     string name;
//     string colour;
// };
// int main () {
//     fruit apple;
//     apple.name ="apple";
//     apple.colour ="red";
//     cout<<apple.name<<"-"<<apple.colour<<endl;
//     fruit *mango = new fruit();
//     mango ->name ="mango";
//     mango -> colour ="yellow";
//     cout<<mango->name<<"-"<<mango->colour<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class sum
// {
//     public:
//     void add(int x, int y){
//      int sum=x+y;
//       cout<<sum<<endl;
// }
// void add(int x,int y, int z){
//  int sum= x+y+z;
//  cout<<sum<<endl;
// }
// void add(float x, float y){
//  float sum = x+y;
//  cout<<sum<<endl;
// }
// };
// int main () {
//     sum s;
//     s.add(2,3);
//     s.add(4,5,6);
//     s.add(float(2.3) , float(3.2));
// return 0;
// }


// #include<iostream>
// using namespace std;
// class parent {
//     public:
//   virtual void print () {
//     cout<<"parent class "<<endl;
//  }
//  void show() {
//     cout<<"parent class"<<endl;
//  }
// };
// class child:public parent{ 
//     public:
//     void print () {
//         cout<<"child class"<<endl;
//     }
//     void show(){
//      cout<<"child class"<<endl;
//     }
// };
// int main () {
//     parent *p;
//     child c;
//     p=&c;
//     p->print ();
//     p->show();
//     return 0;
// }


//   multiple inheritense question.

#include<iostream>
using namespace std;
class student{
 public:
 string name,address,branch,college;
 int phone;
 void getdata() {
    cout<<"enter employe details (name, address,code,company,phone:)";
 cin>>name>>address>>branch>>college;
 cin>>phone;
 }
};
class employe {
    public:
    string name,address,code,company;
     int phone;
 void setdata() {
    cout<<"enter employeedetails(name,branch,address,phone)";
   cin>>name>>address>>code>>company;
   cin>>phone;
    }
};
class person:public student,public employe{
public:
setinfo(){
    cout<<"name of student"<<student::name<<endl;
    cout<<"name of employe"<<employe::name<<endl;
    cout<<"address student:"<<student::address<<endl;
    cout<<"address employe:"<<employe::address<<endl;
    cout<<"your branch is:"<<branch<<endl;
    cout<<"your phone no is student:"<<student::phone<<endl;
    cout<<"your phone no is employe:"<<employe::phone<<endl;
    cout<<"your college name:"<<college<<endl;
    cout<<"your college code:"<<code<<endl;
    cout<<"your company name :"<<company<<endl;
}
};
int main () {
    person p;
    p.student::getdata();
    p.employe::setdata();
    p.setinfo();
   return 0;
}