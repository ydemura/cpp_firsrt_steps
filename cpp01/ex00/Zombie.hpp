//
//  Zombie.hpp
//  cpp_xcode
//
//  Created by Julia Demura on 15/11/2022.
//

#ifndef Zombie_hpp
#define Zombie_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Zombie{
	
public:
	
	Zombie(std::string new_name);
	~Zombie(void);
	void announce(void) const;
	
private:
	
	std::string _name;
	
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif /* Zombie_hpp */
