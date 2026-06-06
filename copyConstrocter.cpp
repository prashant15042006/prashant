
#include <iostream>
using namespace std;

class emp {
    int eid;
    string ename;

public:
    emp(int eid, string ename) {
        this->eid = eid;
        this->ename = ename;
    }

    emp(const emp &ref) {
        eid = ref.eid;
        ename = ref.ename;
    }

    void display() {
        cout << "eid = " << eid << ", ename: " << ename << endl;
    }
};

int main() {
    emp e1(10, "Prashant");
    emp e2(e1);
    e1.display();
    e2.display();
    return 0;
}
