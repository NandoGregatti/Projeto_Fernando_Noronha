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
        void MA3();
};

void A::MA1() {
    cout<<"MA1"<<endl;
};

void A::MA2() {
    cout<<"MA2"<<endl;
};

void A::MA3() {
    cout<<"Alteração a classe A partir do clone"<<endl;
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

class C {
    private:
        string C1;
        int C2;
    public:
        C() {
            C1 = "A";
            C2 = 0;
        }

        void MC1();
        void MC2();
};

void C::MC1() {
    cout<<"MC1"<<endl;
};

void C::MC2() {
    cout<<"MC2"<<endl;
};