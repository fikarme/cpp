#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

class AAnimal{
    protected:
        string _type;
    public:
        virtual ~AAnimal();
        AAnimal();
        AAnimal(string type);
        AAnimal(const AAnimal &copy);
        AAnimal &operator=(const AAnimal &copy);
        string getType() const;
        virtual void makeSound() const = 0;
};

#endif