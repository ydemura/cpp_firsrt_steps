//
//  HumanB.hpp
//  cpp01_03
//
//  Created by Julia Demura on 17/11/2022.
//

#ifndef HumanB_hpp
#define HumanB_hpp

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB{
	
public:
	HumanB(std::string new_name);
	~HumanB();
	void	attack() const;
	void	setWeapon(Weapon &type);
	
private:
	Weapon *_weapon;
	std::string _name;
};



#endif /* HumanB_hpp */
