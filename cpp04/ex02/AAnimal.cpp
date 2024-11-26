#include "AAnimal.hpp"

AAnimal::~AAnimal(){
    cout << "AAnimal destructor called: " << _type << endl;
}

AAnimal::AAnimal(){
    cout << "AAnimal default constructor called" << endl;
    _type = "default";
}

AAnimal::AAnimal(string type){
    cout << "AAnimal type constructor called: " << type << endl;
    _type = type;
}

AAnimal::AAnimal(const AAnimal &copy){
    cout << "AAnimal copy constructor called: " << copy._type << endl;
    *this = copy;
}

AAnimal& AAnimal::operator=(const AAnimal &copy){
	cout << "AAnimal assignment operator called: " << copy._type << endl;
    if(this != &copy)
        _type = copy._type; 
    return *this;
}

string AAnimal::getType() const{
    return _type;
}