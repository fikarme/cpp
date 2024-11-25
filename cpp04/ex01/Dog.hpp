#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	private:
        Brain *brain;
	public:
        ~Dog();
        Dog();
        Dog(string type);
        Dog(const Dog &copy);
        Dog& operator=(const Dog &copy);
        void makeSound() const;
		void setIdea(string idea, int i);
		string getIdea(int i);
};

#endif