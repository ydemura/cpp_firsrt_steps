//
//  FragTrap.cpp
//  cpp03_02
//
//  Created by Julia Demura on 24/11/2022.
//

#include "FragTrap.hpp"


//• Name, which is passed as parameter to a constructor
//• Hit points (100), represent the health of the ClapTrap
//• Energy points (100)
//• Attack damage (30)


FragTrap::FragTrap(std::string given_name) : ClapTrap(given_name){
	
	this->_name = given_name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Default constructor : FragTrap" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "Default destructor : FragTrap" << std::endl;
}

void FragTrap::highFivesGuys(void){
	
	std::cout << "High Fives from FragTrap :D" << std::endl;
}
