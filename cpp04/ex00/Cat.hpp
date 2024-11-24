#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain* brain;
    public:
        virtual ~Cat();
        Cat();
        Cat(string type);
        Cat(const Cat &copy);
        Cat& operator=(const Cat &copy);
        string getType() const override;
        string getIdea(int index) const;
        void makeSound() const override;
        void setIdea(string idea, int index);
};

#endif