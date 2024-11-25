#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal{
    protected:
        string _type;
    public:
        virtual ~WrongAnimal();
        WrongAnimal();
        WrongAnimal(string type);
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &copy);
        string getType() const;
        virtual void makeSound() const;
};

#endif