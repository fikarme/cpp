#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Animal {
public:
    virtual ~Animal() {
        std::cout << "Animal destructor called" << std::endl;
    }
    virtual void makeSound() const = 0; // Pure virtual function
};

class Cat : public Animal {
public:
    ~Cat() {
        std::cout << "Cat destructor called" << std::endl;
    }
    void makeSound() const override {
        std::cout << "Meow Meow" << std::endl;
    }
};

class Dog : public Animal {
public:
    ~Dog() {
        std::cout << "Dog destructor called" << std::endl;
    }
    void makeSound() const override {
        std::cout << "Woof Woof" << std::endl;
    }
};

int main() {
    Animal* animals[2];
    animals[0] = new Cat();
    animals[1] = new Dog();

    for (int i = 0; i < 2; ++i) {
        animals[i]->makeSound();
        delete animals[i]; // This will call the derived class destructor followed by the base class destructor
    }

    return 0;
}
// dynmaic dispatch: 
//     - virtual functions

// static dispatch:

//sanal bi sınıfı doğrudan oluşturamazsın ama subtype poly için kullanılabilir