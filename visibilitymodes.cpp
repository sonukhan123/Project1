#include<iostream>
#include<conio.h>
using namespace std;

class A{
public:
    A(){
    cout<<"A class Constructor\n";
    }
    ~A(){
    cout<<"A destructor\n";
    }
};
class B:public A{
public:
    B(){
    cout<<"B class Constructor\n";
    }

    ~B(){
    cout<<"B destructor\n";
    }
};
class C:public B{
public:
    C(){
    cout<<"c class Constructor\n";
    }
};


class Array
{
  //write your code here
  public:
  virtual void getSize()=0;
  virtual void init()=0;
  virtual void display()=0;
  virtual ~Array(){
  }


};
class IntegerArray:public Array
{
  int n,*p;
  public:
  IntegerArray(int n){
    this->n=n;
  }
  void getSize(){
    cout<<n<<endl;
  }
  void init(){
    p=new int[n];
    for(int i=0;i<n;i++)
      p[i]=i+1;
  }
  void display(){
  	//cout<<n<<endl;
    if(n>5){
    for(int i=n-1;i>=0;i--)
      cout<<p[i]<<" ";
    }
    else{
    for(int i=0;i<n;i++)
      cout<<p[i]<<" ";
      }
  }
  ~IntegerArray(){
    delete p;
    cout<<endl<<"1";
  }
};



int main(){
Array *Arr; //creating pointer of Array class
Arr=new IntegerArray(5); //creating object of IntegerArray class dynamically and store the address of
//object in arr pointer.
Arr->init(); //calling init() method to create array dynamically of size n and initialize the
//newly created array with n integer values.
Arr->getSize(); //calling getsize() method to print the size of array
Arr->display(); // calling display() method to print all array elements separated by space
delete Arr; // using delete operator to free the resources of object, pointed by Arr pointer, once the
return 0;
}
