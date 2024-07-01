#include <bits/stdc++.h>
using namespace std;

class Teacher{
    public:
    // properties / attributes
    string name;
    string dept;
    string subject;
    double salary;

    // methods or member functions
    void changeDept(string newDept){
        dept=newDept;
    }
};

int main(){
    Teacher T1;
    T1.name="Himan";
    T1.dept="CSE";
    T1.subject="OOPS";
    T1.salary=250000;

    cout<<T1.name<<endl;
    return 0;
}