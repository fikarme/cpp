#include "Cat.hpp"

Cat::~Cat(){
    cout << "Cat destructor called: " << _type << endl;
}

Cat::Cat(){
    cout << "Cat default constructor called" << endl;
    _type = "Cat";
}

Cat::Cat(string type){
    cout << "Cat type constructor called: " << type << endl;
    _type = type;
}

Cat::Cat(const Cat &copy) : AAnimal(copy){
    cout << "Cat copy constructor called: " << copy._type << endl;
    *this = copy;
}

Cat& Cat::operator=(const Cat &copy){
    cout << "Cat assignment operator called: " << copy._type << endl;
    if(this != &copy)
        _type = copy._type;
    return *this;
}

void Cat::makeSound() const{
    cout << "Miav miyav" << endl;
}