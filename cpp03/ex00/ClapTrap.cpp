#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(){
    cout << "destructor called: " << _name << endl;
}

ClapTrap::ClapTrap(){
    _name = "default";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    cout << "default constructor called" << endl;
}

ClapTrap::ClapTrap(string name){
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    cout << "constructor called: " << _name << endl;
	cout << _name << ": Hey, best friend!" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    cout << "copy constructor called: " << _name << endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy){
	cout << "assignation operator called: " << copy._name << "-->" << _name << endl;
    _name = copy._name;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    _hitPoints = copy._hitPoints;
    return *this;
}

void ClapTrap::attack(const string& target){
    if(_hitPoints > 0 && _energyPoints > 0 ){
        cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!" << endl;
        _energyPoints -= 1;
		cout << _name << ": Is it dead? Can, can I open my eyes now?" << endl;
    } else if(_hitPoints <= 0) {
		cout << "ClapTrap " << _name << " is dead and cannot attack!" << endl;
		return; // ???
    } else if(_energyPoints <= 0) {
		cout << "ClapTrap " << _name << " is exhausted and cannot attack!" << endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
    if(_hitPoints > 0){
        cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << endl;
        _hitPoints -= amount;
		if(_hitPoints <= 0){
			cout << _name << ": My robotic flesh! AAHH!" << endl;
			cout << "ClapTrap " << _name << " is dead :(" << endl;
		} else{
			cout << "ClapTrap " << _name << " " << _hitPoints << " hit points left!" << endl;
			cout << _name << ": I'll stop talking when I'm dead!" << endl;
		}
    } else{
        cout << "ClapTrap " << _name << " is already dead :(" << endl;
		return;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
    if(_energyPoints > 0 && _hitPoints > 0){
        cout << _name << " repaired itself and got " << amount << " points!" << endl;
        _hitPoints += amount;
        _energyPoints -= 1;
		cout << _name << ": Sweet life juice!" << endl;
    } else{
        cout << _name << " has no energy or hit points left!" << endl;
		cout << _name << ": Dangit, I'm out!" << endl;
	}
}