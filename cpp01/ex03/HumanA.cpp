#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon){
    std::cout << "HumanA Constructor" << std::endl;
	_name	= name;
}

HumanA::~HumanA(){
    std::cout << "HumanA Destructor" << std::endl;
}

void HumanA::attack(){
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon){
    _weapon = weapon;
}
