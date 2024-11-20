#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *weaponB;
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon &weaponB);
	~HumanB();

	void attack();
	void setWeapon(Weapon &weaponB);
};

#endif