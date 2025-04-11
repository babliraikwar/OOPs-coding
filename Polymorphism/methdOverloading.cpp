#include <iostream>
using namespace std;
class A{
   public:
   void print(int a){
    cout<<"a="<<a<<endl;
   }
};
class B:public A
   {
    public:
    void print(int b){
        cout<<"b="<<b<<endl;
    }
   };
int main(){
    B a;
    a.print(5);
    A*b;
    b->print(7);

    return 0;
}