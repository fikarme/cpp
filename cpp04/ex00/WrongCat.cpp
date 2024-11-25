#include "WrongCat.hpp"

WrongCat::~WrongCat(){
    cout << "WrongCat destructor called: " << _type << endl;
}

WrongCat::WrongCat(){
    cout << "WrongCat default constructor called" << endl;
    _type = "default";
}

WrongCat::WrongCat(string type){
    cout << "WrongCat type constructor called: " << type << endl;
    _type = type;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy){
    cout << "WrongCat copy constructor called: " << copy._type << endl;
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &copy){
    cout << "WrongCat assignment operator called: " << copy._type << endl;
    if(this != &copy)
        _type = copy._type;
    return *this;
}

void WrongCat::makeSound() const{
    cout << "Wrong Miav miyav" << endl;
}