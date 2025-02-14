#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal{
	private:
        Brain *brain;
    public:
        ~Cat();
        Cat();
        Cat(string type);
        Cat(const Cat &copy);
        Cat& operator=(const Cat &copy);
        void makeSound() const;
		void setIdea(string idea, int i);
		string getIdea(int i);
};

#endif