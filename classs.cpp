// #include<iostream>
// using namespace std;

// class teacher {
//     private:
//     double salary;    
//     public:
//     string name;
//     int dept;
//     string subject;
 
//        void changeDeprt(int newDept)
// {
//      dept = newDept;
// }
//          void setsalary (double sal) {
//  salary = sal;
//  }
// double getsalary () {
//     return salary;
//    }
// };

// int main () {
//     teacher t1;
//     t1.name ="prashant";
//     t1.dept = 3;
//     t1.subject = "computer";
//     t1.setsalary(2500);

//     cout<<t1.name <<endl;
//     cout<<t1.getsalary() <<endl;

//     return 0;
// }

/*

#include <iostream>
using namespace std;

class teacher {
    private:
    double salary;
    public:
    string name;
    int dept;
    string subject;

    void changeDept( int newDept )
     {
        dept = newDept;
    }

    void setSalary( double sal ) {
        salary = sal;
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    teacher t1;
    t1.name = "Prashant";
    t1.dept = 3;  // Changed to an integer for dept
    t1.subject = "Computer";
    t1.setSalary(2500);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;

    return 0;
}
*/


// #include<iostream>
// using namespace std;
//  class employ
//  {
//     public:
//     string name;
//     string branch="cse,mce,ece";
//     int id;
//     int salary;
//     int cse , mcs , bks;
//     void employ1(string name ){
//      cout<<"enter your name-";
//      cin>>name;
//     }
//       void setBranch(int n){
//          n = cse;
//     }
//     void setBranch(int p){
//         p = mcs;
//     }
//     void setBranch( int k){
//         k = bks ;
//     }
//     };
//     int main  () {
//         employ e;
//         e.employ1("prashant");
//         e.setBranch(200);
//         e.setBranch(300);
//         e.setBranch(500);
//     }
    

  
//   #include<iostream>
//   using namespace std;
//   class employ
//   {
//   public:
//   string name;
//   string branch="cse,mce,ece";
//   int salary;
//   int cse,mce,ece;
  
//  void setdata() {

//     cout<<"welcome to portfolio"<<endl;
//     cout<<"enter your name-";
//     cin>>name;
//     cout<<"enter your branch-";
//     cin>>branch;
//     for(int n=123; n<125; n++){
//     cout<<"YOUR ID IS->"<<name<<"_"<<n<<endl;
//     break;
//     }};
//     void csedata( int cse){
//         string branch="cse";
//     if(branch=cse)
//     {
//         cout<<"a"<<endl;
       
//      } }
    
//     void mcedata(int branch,int mce){
//         if(branch==mce){
//     cout<<mce<<endl;
//     }}
//     void ecedata(int branch,int ece){
//    if(branch == ece)
//         {
//           cout<<ece<<endl;
//  }}
//  };
//  int main () {
//  employ e;
//  e .setdata();
//  e.csedata(59,59);
//  e.mcedata(1000,1000);
//  e.ecedata(500,500);
//  return 0;
//  }


// #include<iostream>
// using namespace std;
// class Employe{
//     public:
//     string name;
//     string branch;
//     int salary;
//     int cse,mce,ece;
//     void setdata() {
//         cout<<"enter your name:";
//         cin>>name;
//         cout<<"enter your branch:(cse,mce,ece)";
//         cin>>branch;
//   for(int n=112; n < 122; n++)
//   {
//    cout<<"YOUR ID is :"<<name<<"_."<<n<<endl;
//    break;
//   }
//     }
//     void getdata() {
//         if(branch=="cse"){
//             cout<<"your salary is 2000/-"<<endl;
//         }
//         else if(branch=="mce"){
//             cout<<"your salary is 1000/-"<<endl;
//         }
//         else if(branch=="ece"){
//             cout<<"your salary is 500/-"<<endl;
//         }else
//         cout<<"invalid branch"<<endl;
//     }
// };
// int main () {
//     Employe e;
//     e.setdata();
//     e.getdata();
//     return 0;
// }

          // Q1.  // employe to inter the company and check the portfolio.

// #include<iostream>
// using namespace std;

// class Employe {
//     public:
//     string name;
//     string branch;
//     int salary;
//     static int id_counter; // Static member to keep track of IDs
//     int id;
//     void setdata() {
//         cout << "Enter your name: ";
//         cin >> name;
//         cout << "Enter your branch (cse, mec, ece): ";
//         cin >> branch;
//         id = id_counter++; // Assign and increment ID
//         cout << "Your ID is: " << name << "_" << id << endl;
//     }
//     void getdata() {
//         int salary;
//         switch(branch[0]) {  // Use the first character of the branch string
//             case 'c':
//                 if(branch == "cse") {
//                     salary = 2000;
//                     cout << "Your salary is 2000/-" << endl;
//                 } else {
//                     cout << "Invalid branch" << endl;
//                 }
//                 break;
//             case 'm':
//                 if(branch == "mec") {
//                     salary = 1000;
//                     cout << "Your salary is 1000/-" << endl;
//                 } else {
//                     cout << "Invalid branch" << endl;
//                 }
//                 break;
//             case 'e':
//                 if(branch == "ece") {
//                     salary = 500;
//                     cout << "Your salary is 500/-" << endl;
//                 } else {
//                     cout << "Invalid branch" << endl;
//                 }
//                 break;
//             default:
//                 cout << "Invalid branch" << endl;
//                 break;
//         }
//     }
// };
// // Initialize the static member
// int Employe::id_counter = 112;
// int main() {
//     int num_employees;
//     cout << "Enter the number of employees: ";
//     cin >> num_employees;
//     for(int i = 0; i < num_employees; i++) {
//         Employe e;
//         e.setdata();
//         e.getdata();
//         cout << endl;
//     }
//     return 0;
// }


