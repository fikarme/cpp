#include "Cat.hpp"
#include "Brain.hpp"

Cat::~Cat(){
    cout << "Cat destructor called: " << _type << endl;
    delete brain;
}

Cat::Cat(){
    cout << "Cat default constructor called" << endl;
    _type = "default";
    brain = new Brain();
}

Cat::Cat(string type){
    cout << "Cat type constructor called: " << type << endl;
    _type = type;
    brain = new Brain();
}

Cat::Cat(const Cat &copy){
    cout << "Cat copy constructor called: " << copy._type << endl;
    *this = copy;
}

Cat& Cat::operator=(const Cat &copy){
    cout << "Cat assignment operator called: " << copy._type << endl;
    if(this != &copy){
        _type = copy._type;
		delete brain;
    	brain = new Brain();
    	brain = copy.brain;
	}
    return *this;
}

void Cat::makeSound() const{
    cout << "Miav miyav" << endl;
}

void Cat::setIdea(string idea, int i){
	brain->setIdea(idea, i);
}

string Cat::getIdea(int i){
	return brain->getIdea(i);
}