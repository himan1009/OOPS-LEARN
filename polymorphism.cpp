#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;

    Student(){
        cout<<"non parameter constructor"<<endl;
    }

    Student(string name){
        this->name=name;
        cout<<"parameter constructor"<<endl;
    }

};

int main(){
    Student s1;
    Student s2("tony");

    return 0;
}