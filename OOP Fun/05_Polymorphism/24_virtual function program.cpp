#include<iostream>
using namespace std;

class BASE{
    public:
        virtual void show(){cout << "BASE CLASS" << endl;}
};

class DERV1:public BASE{
    public:
        void show(){cout << "DERV1 CLASS" << endl;}
};
class DERV2:public BASE{
    public:
        void show(){cout << "DERV2 CLASS" << endl;}
};


int main(){
    // DERV1 dv1;
    // DERV2 dv2;

    // BASE *ptr;
    // ptr = &dv1;
    // ptr->show();

    //BASE class function will be invoked if we don't use virtual...BASE class er function virtual kore dile derived class er kase seta virtual hoye jabe ba invisible hoye jabe then nijer function call korbe...
    BASE *ptr;
    ptr = new DERV1();
    ptr->show();

    ptr = new DERV2();
    ptr->show();
}