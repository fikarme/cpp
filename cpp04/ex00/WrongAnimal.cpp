#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal(){
    cout << "WrongAnimal destructor called: " << _type << endl;
}

WrongAnimal::WrongAnimal(){
    cout << "WrongAnimal default constructor called" << endl;
    _type = "default";
}

WrongAnimal::WrongAnimal(string type){
    cout << "WrongAnimal type constructor called: " << _type << endl;
    _type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    cout << "WrongAnimal copy constructor called: " << copy._type << "==>" << _type << endl;
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy){
	cout << "WrongAnimal assignment operator called: " << copy._type << "-->" << _type << endl;
    if(this != &copy)
        _type = copy._type;
    return *this;
}

string WrongAnimal::getType() const{
    return _type;
}

void WrongAnimal::makeSound() const{
    cout << "Wrong default animal sound" << endl;
}