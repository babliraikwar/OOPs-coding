#include <iostream>
using namespace std;
 class A
 {
    private:
    int marks;
    public:
    void setvalue(int a){
        marks=a;
    }
    int  getmarks(){
        return marks;
    }
 };
 int main(){
    A obj;
    obj.setvalue(100);
    cout<<obj.getmarks();
    return 0;
 }