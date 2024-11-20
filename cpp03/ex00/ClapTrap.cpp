#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    _name = "name";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    cout << "ClapTrap class created." << endl;
}

ClapTrap::ClapTrap(std::string name){
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    cout << "ClapTrap class that takes a name parameter has been created." << endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy){
    cout << "Copy constructor called" << endl;
    *this = cpy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &cpy){
    cout << "Copy assigment constructor called" << endl;
    _name = cpy._name;
    _energyPoints = cpy._energyPoints;
    _attackDamage = cpy.attackDamage;
    _hitPoints = cpy._hitPoints;
    return(*this);
}

void ClapTrap::attack(const std::string& target){
    if(_energyPoints > 0 && _hitPoints > 0){
        cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _hitPoints << " points of damage!" << endl;
        _energyPoints -= 1;
    } else
        cout << _name << " has no energy or hit points left." << endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if(_hitPoints > 0){
        cout << _name << " took " << amount << " points of damage." << endl;
        _hitPoints -= amount;
    } else
        cout << _name << " is already dead." << endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(_energyPoints > 0 && _hitPoints > 0){
        cout << _name << " repaired itself and got " << amount << " points." << endl;
        _hitPoints += amount;
        _energyPoints -= 1;
    } else
        cout << _name << " has no energy or hit points left." << endl;
}

ClapTrap::~ClapTrap(){
    cout << "ClapTrap class removed." << endl;
}