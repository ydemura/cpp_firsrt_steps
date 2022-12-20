//
//  randomChump.cpp
//  cpp_xcode
//
//  Created by Julia Demura on 15/11/2022.
//

#include "Zombie.hpp"
//• void randomChump( std::string name );
//It creates a zombie, name it, and the zombie announces itself.


void randomChump( std::string name ){

	Zombie Chumpy = Zombie(name);
	Chumpy.announce();
	//how to destruct this? if no new
}
