//
//  ClapTrap.hpp
//  cpp03_02
//
//  Created by Julia Demura on 24/11/2022.
//

#ifndef ClapTrap_hpp
#define ClapTrap_hpp

#include <iostream>
#include <string>

class ClapTrap{
	
protected:
	std::string _name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_damage;
	
public:
	ClapTrap(const std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap & src);
	ClapTrap &operator=(ClapTrap const & src);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif /* ClapTrap_hpp */
