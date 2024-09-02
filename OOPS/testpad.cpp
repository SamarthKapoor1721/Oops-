#include <iostream>
using namespace std;
class A {
    public:
    int x;
    int *p;
    
};
int main(){


    A obj1;
    A obj2(obj1);

    cout<<"obj1.x"<<obj1.x<<endl;
    cout<<"obj1.p"<<(obj1.p)<<endl;
    
    cout<<"obj2.x"<<obj2.x<<endl;
    
    cout<<"obj2.x"<<(obj1.p)<<endl;

    obj1.x=10;
    *(obj1.p)=16;

    cout <<"after changing the values of object 1";

    cout<<"obj1.x"<<obj1.x<<endl;
    cout<<"obj1.p"<<(obj1.p)<<endl;
    cout<<"obj2.x"<<obj2.x<<endl;
    cout<<"obj2.x"<<(obj1.p)<<endl;


}