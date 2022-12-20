//
//  FragTrap.hpp
//  cpp03_02
//
//  Created by Julia Demura on 24/11/2022.
//

#ifndef FragTrap_hpp
#define FragTrap_hpp

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	
public:
	FragTrap(std::string given_name);
	~FragTrap();
	void highFivesGuys(void);
	
};




#endif /* FragTrap_hpp */
