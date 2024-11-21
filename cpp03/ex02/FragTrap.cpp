#include "FragTrap.hpp"

FragTrap::~FragTrap(){
    cout << "FragTrap destructor called: " << _name << endl;
}

FragTrap::FragTrap() : ClapTrap(){
	_name = "default";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    cout << "FragTrap default constructor called" << endl;
}

FragTrap::FragTrap(string name){
	_name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    cout << "FragTrap constructor called: " << _name << endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy._name){
    cout << "FragTrap copy constructor called: " << _name << endl;
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &copy){
	cout << "FragTrap assignation operator called: " << copy._name << "-->" << _name << endl;
    _name = copy._name;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    _hitPoints = copy._hitPoints;
    return *this;
}

void FragTrap::highFivesGuys(){
	cout << "FragTrap " << _name << ": Gimme five!" << endl;
}