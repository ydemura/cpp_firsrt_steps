//
//  Weapon.cpp
//  cpp01_03
//
//  Created by Julia Demura on 17/11/2022.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string new_type) : _type(new_type){
	std::cout << "Conctructor: Weapon: " << _type << std::endl;
}

Weapon::~Weapon(){
	std::cout << "Destructor: Weapon: " << _type << std::endl;
}

const std::string& Weapon::getType(void) const{
	const std::string& ref = _type;
	return ref;
}

void Weapon::setType(std::string new_type){
	_type = new_type;
}
