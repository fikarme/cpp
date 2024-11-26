#include "Dog.hpp"

Dog::~Dog(){
    cout << "Dog destructor called: " << _type << endl;
    delete brain;
}

Dog::Dog(){
    cout << "Dog default constructor called" << endl;
    _type = "Dog";
    brain = new Brain();
}

Dog::Dog(string type){
    cout << "Dog type constructor called: " << type << endl;
    _type = type;
    brain = new Brain();
}

Dog::Dog(const Dog &copy) : AAnimal(copy){
    cout << "Dog copy constructor called: " << copy._type << endl;
    brain = new Brain();
    *this = copy;
}

Dog& Dog::operator=(const Dog &copy){
    cout << "Dog assignment operator called: " << copy._type << endl;
    if(this != &copy){
        _type = copy._type;
		delete brain;
    	brain = new Brain(*copy.brain);
	}
    return *this;
}

void Dog::makeSound() const{
    cout << "HAV hav" << endl;
}

void Dog::setIdea(string idea, int i){
	if(i < 0 || i >= 100)
		cout << "wrong i" << endl;
	else
		brain->ideas[i] = idea;
}

string Dog::getIdea(int i){
	if(i < 0 || i >= 100)
		return "wrong i";
	else
		return brain->ideas[i];
}