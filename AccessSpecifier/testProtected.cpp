#include<iostream>

using namespace std;

class Base {

    public:
        virtual void hello() = 0;
        virtual void mySetNumber(int num) = 0;
        void setNumber(int num) {number = num;}
        virtual ~Base() {}
    protected:
        int  number;
};

class A: public Base {
    public:
        void hello() {cout << "Hello I'm A number:" << number << endl;}
        void mySetNumber(int num) {number = num;}
};

class B: public Base {
    public:
        void hello() {cout << "Hello I'm B number:" << number << endl;}
        void mySetNumber(int num) {number = num;}
};

int main() {
    A objA;
    B objB;
    objA.mySetNumber(1);
    objB.mySetNumber(2);
    objA.hello();
    objB.hello();


    objA.setNumber(3);
    objB.setNumber(4);
    objA.hello();
    objB.hello();
    return 0;
}

