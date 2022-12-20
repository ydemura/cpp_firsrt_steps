//
//  ScavTrap.cpp
//  cpp03_01
//
//  Created by Julia Demura on 24/11/2022.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string given_name) : ClapTrap(given_name){
	
	this->_name = given_name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "Default constructor : ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "Default destructor : ScavTrap" << std::endl;
}


void ScavTrap::attack(std::string const& target){
	
	if (_hit_points <= 0){
		std::cout << "dead, cannot act" << std::endl;
		return;
	}
	
	if (_energy_points <= 0){
		std::cout << "No enegy to attack, its tired" << std::endl;
	} else {
		std::cout << "ScavTrap " << _name << " attacks AGRESSIVELY " << target << ", causing " << _attack_damage << " points of PAINFUL damage" << std::endl;
		_energy_points-= 1;
	}
}

void    ScavTrap::guardGate() {
	
	std::cout << "ScavTrap " << _name << " is on Gate keeper mode" << std::endl;
}
