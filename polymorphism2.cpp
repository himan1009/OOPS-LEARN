#include <bits/stdc++.h>
using namespace std;

class Print{
    public:
    void show(int x){
        cout<<x<<endl;
    }

    void show(char ch){
        cout<<ch<<endl;
    }
};

int main(){
    Print p1;
    p1.show('#');

    p1.show(121);
    
    return 0;
}