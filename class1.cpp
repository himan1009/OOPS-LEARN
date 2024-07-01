#include <bits/stdc++.h>
using namespace std;

class Teacher{
    private:
    double salary;

    public:
    Teacher(){
        cout<<"HI, I am constructor"<<endl;
        dept="CSE1";
    }

    Teacher(string n, string d, string s, double sal){
        name=n;
        dept=d;
        subject=s;
        salary=sal;
    }

    Teacher(string name, string dept){
        this->name=name;
        this->dept=dept;
    }
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

    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"subject : "<<subject<<endl;
    }
};

class Student{
    public:
    string name;
    string roll;
};

int main(){
    Teacher T1; // constructor called
    Student S1;

    Teacher T2("HIMAN", "ECE", "CN", 300000);
    Teacher T3("Aditi", "CSE");
    T1.name="Himan";
    T1.subject="OOPS";
    T1.setSalary(250000);

    S1.name="Tina";
    S1.roll=1;

    cout<<T1.name<<endl;
    cout<<T1.getSalary()<<endl;
    cout<<S1.name<<endl;
    cout<<T1.dept<<endl;
    T2.getInfo();
    T3.getInfo();
    return 0;
}