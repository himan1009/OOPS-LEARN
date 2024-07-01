#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:
    void getInfo(){
        cout<<"parent class"<<endl;
    }

    virtual void hello(){
        cout<<"HELOO"<<endl;
    }
};

class Child:public Parent{
    public:
    void getInfo(){
        cout<<"child class"<<endl;
    }

    void hello(){
        cout<<"hello from child"<<endl;
    }
};

int main(){
    Parent p1; 
    p1.getInfo();

    Child c1;
    c1.hello();
    return 0;
}