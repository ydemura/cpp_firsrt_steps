//
//  HumanA.cpp
//  cpp01_03
//
//  Created by Julia Demura on 17/11/2022.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &weapon): _name(new_name), _weapon(weapon) {
	std::cout << "Conctructor: HumanA: " << _name << std::endl;
}

HumanA::~HumanA(){
	std::cout << "Destructor: HumanA: " << _name << std::endl;
}

void	HumanA::attack() const{
	std::cout << _name <<  " attacks with their " << _weapon.getType() << std::endl;
}
