#include <iostream>

class A {
public:
    int func(int val) {
        return val * 2;
    }
};

class B {
public:
    int func(int val) {
        return val * 3;
    }
};

class C {
public:
    int func(int val) {
        return val * 5;
    }
};

class D : public A, public B, public C {
public:
    int val;

    // Function to update D's val using the func functions of A, B, and C
    void update_val(int new_val) {
        val = new_val;
        // Call func functions to manipulate val
        val = A::func(val);
        val = B::func(val);
        val = C::func(val);
    }
};

int main() {
    D obj;
    obj.update_val(30); // The prime factorization of 30 is 2 * 3 * 5
    std::cout << "Updated val in class D: " << obj.val << std::endl; // Output should be 30

    return 0;
}
