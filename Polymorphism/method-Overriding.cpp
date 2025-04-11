#include <iostream>
using namespace std;
class A{
   public:
    virtual void print(int a){
    cout<<"a="<<a;
   }
    
};
class B:public A
   {
    public:
    void print(int b){
        cout<<"b="<<b;
    }
   };
int main(){
    A*a=new B();
    // A *a;
    // B aa;
    // a=&aa;
    a->print(5);
    return 0;
}