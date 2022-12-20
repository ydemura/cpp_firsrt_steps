//
//  ScavTrap.hpp
//  cpp03_02
//
//  Created by Julia Demura on 24/11/2022.
//

#ifndef ScavTrap_hpp
#define ScavTrap_hpp

//https://www.geeksforgeeks.org/inheritance-in-c/
//https://www.youtube.com/watch?v=MmR_qpYthP8

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap{
	
public:
	ScavTrap(std::string given_name);
	~ScavTrap();
	void attack(std::string const& target);
	void guardGate();
};

#endif /* ScavTrap_hpp */
