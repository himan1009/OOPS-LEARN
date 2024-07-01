#include <bits/stdc++.h>
using namespace std;

class person{
public:
    string name;
    int age;

    // person(string name, int age){
    //     this->name=name;
    //     this->age=age;
    // }
    person(){
        cout<<"parent constrctor"<<endl; 
    }

};

class student:public person{
public:
    int roll;

    student(){
        cout<<"child constructor"<<endl;
    }
    void getInfo(){ 
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<roll<<endl;
    }
};


class gradStudent:public student{
public:
    string research;
};

int main(){
    student s1;
    s1.name="rahul";
    s1.age=21;
    s1.roll=1;

    s1.getInfo();

    gradStudent s2;
    s2.name="tony starc";
    s2.research="quantum";

    cout<<s2.name<<endl;
    cout<<s2.research<<endl;

    return 0;
}