#include "Cat.hpp"

Cat::~Cat(){
    cout << "Cat destructor called: " << _type << endl;
    delete brain;
}

Cat::Cat(){
    cout << "Cat default constructor called" << endl;
    _type = "Cat";
    brain = new Brain();
}

Cat::Cat(string type){
    cout << "Cat type constructor called: " << type << endl;
    _type = type;
    brain = new Brain();
}

Cat::Cat(const Cat &copy) : AAnimal(copy){
    cout << "Cat copy constructor called: " << copy._type << endl;
    brain = new Brain();
    *this = copy;
}

Cat& Cat::operator=(const Cat &copy){
    cout << "Cat assignment operator called: " << copy._type << endl;
    if(this != &copy){
        _type = copy._type;
		delete brain;
    	brain = new Brain(*copy.brain);
	}
    return *this;
}

void Cat::makeSound() const{
    cout << "Miav miyav" << endl;
}

void Cat::setIdea(string idea, int i){
	if(i < 0 || i >= 100)
		cout << "wrong i" << endl;
	else
		brain->ideas[i] = idea;
}

string Cat::getIdea(int i){
	if(i < 0 || i >= 100)
		return "wrong i";
	else
		return brain->ideas[i];
}