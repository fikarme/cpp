#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        ~ScavTrap();
        ScavTrap();
        ScavTrap(string name);
        ScavTrap(const ScavTrap &cpy);
        ScavTrap &operator=(const ScavTrap &cpy);
        void attack(const string& target);
        void guardGate();
};

#endif