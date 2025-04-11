#include <iostream>
using namespace std;
class A{
   public:
   void print(int a){
    cout<<"a="<<a;
   }
    A(){
    cout<<"hello I am constructor R";
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
    B *a;
    a->print(5);
    return 0;
}