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

    }

};

class student:public person{
public:
    int roll;

    void getInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<roll<<endl;
    }
};

int main(){
    student s1;
    s1.name="rahul";
    s1.age=21;
    s1.roll=1;

    s1.getInfo();
    return 0;
}