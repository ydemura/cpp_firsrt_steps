//
//  Zombie.cpp
//  cpp_xcode
//
//  Created by Julia Demura on 15/11/2022.
//

#include "Zombie.hpp"

Zombie::Zombie(void){
	std::cout << "Constructor void called" << std::endl;
}

Zombie::~Zombie(void){
	std::cout << "Destructor: Zombie named " << this->_name << std::endl;
}

void Zombie::give_name(std::string new_name){
	_name = new_name;
}



void Zombie::announce(void) const{

	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

