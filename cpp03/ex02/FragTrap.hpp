#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp" // ???
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        ~FragTrap();
        FragTrap();
        FragTrap(string name);
        FragTrap(const FragTrap &cpy);
        FragTrap &operator=(const FragTrap &cpy);
        void highFivesGuys();
};

#endif