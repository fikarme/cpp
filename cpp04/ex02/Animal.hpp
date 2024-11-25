#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

class Animal{
    protected:
        string _type;
    public:
        virtual ~Animal();
        Animal();
        Animal(string type);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        string getType() const;
        virtual void makeSound() const;
};

#endif