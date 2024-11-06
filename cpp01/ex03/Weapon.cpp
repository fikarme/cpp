#include "Weapon.hpp"

Weapon::Weapon(){
    std::cout << "Weapon Constructor" << std::endl;
}

Weapon::~Weapon(){
	std::cout << "Weapon Destructor" << std::endl;
}

Weapon::Weapon(std::string type){
    _type = type;
}
const std::string& Weapon::getType(){
    const std::string &ref = _type;
    return ref;
}

void Weapon::setType(std::string type){
    _type = type;
}

