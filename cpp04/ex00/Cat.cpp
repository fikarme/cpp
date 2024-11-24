#include "Cat.hpp"

Cat::~Cat(){
    cout << "Cat destructor called: " << _type << endl;
}

Cat::Cat(){
    cout << "Cat default constructor called" << endl;
    _type = "default";
    brain = new Brain();
}

Cat::Cat(string type){
    cout << "Cat type constructor called: " << _type << endl;
    _type = type;
    brain = new Brain();
}

Cat::Cat(const Cat &copy){
    cout << "Cat copy constructor called: " << copy._type << "==>" << _type << endl;
    *this = copy;
}

Cat& Cat::operator=(const Cat &copy){
    cout << "Cat assignation operator called: " << copy._type << "-->" << _type << endl;
    if(this != &copy) {
        _type = copy._type;
        delete brain;
        brain = new Brain(*copy.brain);
    }
    return *this;
}

void Cat::makeSound() const{
    cout << "Meow Meow" << endl;
}