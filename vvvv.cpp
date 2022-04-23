#include<iostream>
#include<conio.h>
using namespace std;

class A{
private:
    int a;
protected:
    int b;
public:
    int c;
};
class B:private A{
public:
    void fun(){
        a=10;
        b=10;
        c=10;
        cout<<""<<" "<<b<<" "<<c<<endl;
    }
};

int main(){
   B o1;
   o1.c=20;
   o1.fun();


return 0;
}
