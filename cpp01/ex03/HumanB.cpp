#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    std::cout << "HumanB Constructor" << std::endl;
	_name	= name;
    _weapon = NULL;
}

HumanB::~HumanB(){
    std::cout << "HumanB Destructor" << std::endl;
}

void HumanB::attack(){
    if (_weapon == NULL)
        std::cout << _name << " attacks with their fist" << std::endl;
    else
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}
