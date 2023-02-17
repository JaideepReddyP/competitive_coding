#include<iostream>
using namespace std;

class A{
    void out(){
        cout << "Void A ";
    }
public:
    A(){
        cout<< "In A ";
    }
};

class B: public A{
public:
    B(){
        cout << "In B ";
    }
    void out(int a){
        cout << "Void B";
    }
};

class C: public A{
public:
    C(){
        cout << "In C ";
    }
    // void out(){
    //     cout << "Void C";
    // }
};


int main(){
    B b;
    C c;
    b.out(1);
}