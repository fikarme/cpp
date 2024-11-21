#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(){
    cout << "ScavTrap class removed." << endl;
}

ScavTrap::ScavTrap() : ClapTrap(){
	_name = "default";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    cout << "default constructor called" << endl;
}

ScavTrap::ScavTrap(string name){
	_name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    cout << "ScavTrap constructor called: " << _name << endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy._name){
    cout << "Copy constructor called" << endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy){
    cout << "Copy assigment constructor called" << endl;
    _name = copy._name;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    _hitPoints = copy._hitPoints;
    return *this;
}

void ScavTrap::attack(const string& target){
    if(_hitPoints > 0 && _energyPoints > 0 ){
        cout << "ScavTrap " << _name << " attacks " << target;
		cout << ", causing " << _attackDamage << " points of damage!" << endl;
        _energyPoints -= 1;
    } else if(_hitPoints <= 0){
		cout << "ScavTrap " << _name << " is dead and cannot attack!" << endl;
		return;
    } else if(_energyPoints <= 0)
		cout << "ScavTrap " << _name << " is exhausted and cannot attack!" << endl;
}

void ScavTrap::guardGate(){
    cout << _name << " is in gatekeeper mode." << endl;
}