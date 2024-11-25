#include "Animal.hpp"

Animal::~Animal(){
    cout << "Animal destructor called: " << _type << endl;
}

Animal::Animal(){
    cout << "Animal default constructor called" << endl;
    _type = "default";
}

Animal::Animal(string type){
    cout << "Animal type constructor called: " << type << endl;
    _type = type;
}

Animal::Animal(const Animal &copy){
    cout << "Animal copy constructor called: " << copy._type << endl;
    *this = copy;
}

Animal& Animal::operator=(const Animal &copy){
	cout << "Animal assignment operator called: " << copy._type << endl;
    if(this != &copy)
        _type = copy._type; 
    return *this;
}

string Animal::getType() const{
    return _type;
}

void Animal::makeSound() const{
    cout << "default animal sound" << endl;
}