//
//  ClapTrap.cpp
//  cpp03_02
//
//  Created by Julia Demura on 24/11/2022.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string given_name) : _name(given_name), _hit_points(10), _energy_points(10), _attack_damage(0){
	std::cout << "Default constructor : ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor : ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src){
	std::cout << "Copy constructor : ClapTrap" << std::endl;
	*this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src){
	
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	std::cout << "Copy assignment operator : ClapTrap" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	
	if (_hit_points <= 0){
		std::cout << "dead, cannot act" << std::endl;
		return;
	}
	
	if (_energy_points <= 0){
		std::cout << "No enegy to attack" << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage" << std::endl;
		_energy_points-= 1;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	
	if (_hit_points <= 0){
		std::cout << "dead, cannot act" << std::endl;
		return;
	}
	
	if (_energy_points == 0){
		std::cout << "No enegy to heal" << std::endl;
	} else if (amount > _energy_points){
		std::cout << "No enegy heal so much" << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " heals itself for " << amount << " points" << std::endl;
		_energy_points -= amount;
		_hit_points += amount;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	
	if (_hit_points <= 0){
		std::cout << "dead, cannot act" << std::endl;
		return;
	} else if (amount > _hit_points){
		_hit_points = 0;
		std::cout << "headshot, ClapTrap " << _name << " died" << std::endl;
		return;
	} else {
		_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " receive " << amount << " damage" << std::endl;
	}
}
