//
//  HumanB.cpp
//  cpp01_03
//
//  Created by Julia Demura on 17/11/2022.
//

#include "HumanB.hpp"

//Now, create two classes: HumanA and HumanB. They both have a Weapon and a
//name. They also have a member function attack() that displays (of course, without the angle brackets):
// <name> attacks with their <weapon type>

HumanB::HumanB(std::string new_name) : _name(new_name){
	std::cout << "Constructor: HumanB: " << _name << std::endl;
}

HumanB::~HumanB(){
	std::cout << "Destructor: HumanB: " << _name << std::endl;
}

void	HumanB::attack() const{
	std::cout << _name <<  " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &type){
	_weapon = &type;
}
