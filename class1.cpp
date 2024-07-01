#include <bits/stdc++.h>
using namespace std;

class Teacher{
    private:
    double salary;
    
    public:
    // properties / attributes
    string name;
    string dept;
    string subject;

    // methods or member functions
    void changeDept(string newDept){
        dept=newDept;
    }


    // setter
    void setSalary(double s){
        salary=s;
    }

    // getter
    double getSalary(){
        return salary;
    }
};

class Student{
    public:
    string name;
    string roll;
};

int main(){
    Teacher T1;
    Student S1;

    T1.name="Himan";
    T1.dept="CSE";
    T1.subject="OOPS";
    T1.setSalary(250000);

    S1.name="Tina";
    S1.roll=1;

    cout<<T1.name<<endl;
    cout<<T1.getSalary()<<endl;
    cout<<S1.name<<endl;
    return 0;
}