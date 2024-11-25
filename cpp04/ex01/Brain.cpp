#include "Brain.hpp"

Brain::~Brain(){
	cout << "Brain destructor called" << endl;
}

Brain::Brain(){
	cout << "Brain default constructor called" << endl;
}

Brain::Brain(const Brain &copy){
	cout << "Brain copy constructor called" << endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy){
	cout << "Brain assignment operator called" << endl;
	if (this != &copy)
		for (int i = 0; i < 100; i++)
			_ideas[i] = copy._ideas[i];
	return *this;
}

void Brain::setIdea(string idea, int i){
	_ideas[i] = idea;
}

string Brain::getIdea(int i) const{
	return _ideas[i];
}