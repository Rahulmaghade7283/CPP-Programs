#include <iostream>
using namespace std;
class A{
 public :
    void show();
    A();
    A(int);
    A(int,int);
   
};

void A::show()
    {
        
        cout<<"\nshow of A";
    }
     A::A(int a,int b)
    {
         cout<<"\n2 arg CTOR of A";
    }
  A::A(int a)
    {
         cout<<"\n1 arg CTOR of A";
    }
     A::A()
    {
         cout<<"\n0 arg CTOR of A";
    }

 

int main() {
    // Write C++ code here
    A obja1(100,200);
     A obja2;
      A obja3(100);
    //obja.show();

    return 0;
}
