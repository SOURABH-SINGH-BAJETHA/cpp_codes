#include<iostream>
using namespace std;

class family {
public:
    void func() {
        printf("family called : ");
    }
};

class father : virtual public family {
public:
    
    void func() {
        printf("Father called");
        
    }
    
};

class mother : virtual public family {
public:
    void func() {
        printf("mother called");
    }
};

class child : public father, public mother {
public:
    void f() {
          // Specify which version of func to call
          family::func();
        father::func();
        mother::func();
    }
};

int main() {
    child c;
    c.f();
    return 0;
}
