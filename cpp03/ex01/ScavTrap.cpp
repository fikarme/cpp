#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(){
    cout << "ScavTrap destructor called: " << _name << endl;
}

ScavTrap::ScavTrap() : ClapTrap(){
	_name = "default";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    cout << "ScavTrap default constructor called" << endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name){
	_name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    cout << "ScavTrap constructor called: " << _name << endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy._name){
    cout << "ScavTrap copy constructor called: " << _name << endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy){
	cout << "ScavTrap assignation operator called: " << copy._name << "-->" << _name << endl;
    _name = copy._name;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    _hitPoints = copy._hitPoints;
    return *this;
}

void ScavTrap::attack(const string& target){
    if(_hitPoints > 0 && _energyPoints > 0 ){
        cout << "ScavTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!" << endl;
        _energyPoints -= 1;
    } else if(_hitPoints <= 0){
		cout << "ScavTrap " << _name << " is dead and cannot attack!" << endl;
    } else if(_energyPoints <= 0)
		cout << "ScavTrap " << _name << " is exhausted and cannot attack!" << endl;
}

void ScavTrap::guardGate(){
    cout << _name << " is in Gate keeper mode (ScavTrap)" << endl;
}