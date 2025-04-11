#include <iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"i ma A class "<<endl;
    }

};
class B:public A{
    public:
    void p(){
        cout<<" i am B"<<endl;
    }

};
class C:public A{
    public:
    void R(){
        cout<<" i am C"<<endl;
    }

};

int main(){
     C a;
     B b;
    a.R();
    a.print();
    b.p();
    b.print();
    return 0;
}