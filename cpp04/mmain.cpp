#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Base {
public:
    virtual ~Base() { // Virtual destructor
        std::cout << "Base destructor called" << std::endl;
    }
};
class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived destructor called" << std::endl;
    }
};
int main() {
    Base* obj = new Derived();
    delete obj;
// Calls Derived destructor followed by Base destructor
    return 0;
}