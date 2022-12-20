//
//  HumanA.hpp
//  cpp01_03
//
//  Created by Julia Demura on 17/11/2022.
//

#ifndef HumanA_hpp
#define HumanA_hpp

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA{
	
public:
	
	HumanA(std::string new_name, Weapon &weapon);
	~HumanA();
	void	attack() const;
	
private:
	
	Weapon &_weapon;
	std::string _name;
};


#endif /* HumanA_hpp */
