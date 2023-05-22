#include <iostream>

using namespace std;

class A {
    private:
        int A1;
        float A2;
    public:
        A() {
            A1 = 0;
            A2 = 0;
        }

        void MA1();
        void MA2();
};

void A::MA1() {
    cout<<"MA1"<<endl;
};

void A::MA2() {
    cout<<"MA2"<<endl;
};

class B {
    private:
        int B1;
        float B2;
    public:
        B() {
            B1 = 0;
            B2 = 0;
        }

        void MB1();
        void MB2();
};

void B::MB1() {
    cout<<"MB1"<<endl;
};

void B::MB2() {
    cout<<"MB2"<<endl;
};
