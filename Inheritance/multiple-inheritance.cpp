#include <iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"i ma Base class "<<endl;
    }

};
class B{
    public:
    void p(){
        cout<<" i am c"<<endl;
    }

};
class C:public A,public B{
    public:
    void R(){
        cout<<" i am R"<<endl;
    }

};

int main(){
     C a;
    a.R();
    a.p();
    a.print();
    return 0;
}