#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal{
    public:
        ~Cat();
        Cat();
        Cat(string type);
        Cat(const Cat &copy);
        Cat& operator=(const Cat &copy);
        string getType() const;
        void makeSound() const;
};

#endif