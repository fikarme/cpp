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
			ideas[i] = copy.ideas[i];
	return *this;
}