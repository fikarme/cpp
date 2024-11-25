#include "Dog.hpp"

Dog::~Dog(){
    cout << "Dog destructor called: " << _type << endl;
}

Dog::Dog(){
    cout << "Dog default constructor called" << endl;
    _type = "default";
}

Dog::Dog(string type){
    cout << "Dog type constructor called: " << _type << endl;
    _type = type;
}

Dog::Dog(const Dog &copy): Animal(copy){
    cout << "Dog copy constructor called: " << copy._type << "==>" << _type << endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog &copy){
    cout << "Dog assignment operator called: " << copy._type << "-->" << _type << endl;
    if(this != &copy)
        _type = copy._type;
    return *this;
}

void Dog::makeSound() const{
    cout << "HAV hav" << endl;
}