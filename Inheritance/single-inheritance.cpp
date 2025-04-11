#include <iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"i ma private ";
    }

};
class B:public A{
    public:
    void p(){
        cout<<" i am c";
    }

};
int main(){
    B a;
    a.p();
    a.print();
    return 0;
}