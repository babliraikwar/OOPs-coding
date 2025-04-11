#include <iostream>
using namespace std;
class A{
   public:
   // abstract void print();         in java 
  virtual void print()=0;
    void R(){
        cout<<" i am R";
    }
};
class B:public A
   {
    public:
    void print(){
        cout<<"i am derived base"<<endl;
    }
    void print1(){
        cout<<"i am derived class";
    }
   };
int main(){
    B a;
    a.print();
    a.print1();
    return 0;
}