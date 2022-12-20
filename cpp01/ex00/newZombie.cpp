//
//  newZombie.cpp
//  cpp_xcode
//
//  Created by Julia Demura on 15/11/2022.
//

#include "Zombie.hpp"
#include <new>
//• Zombie* newZombie( std::string name );
//It creates a zombie, name it, and return it so you can use it outside of the function
//scope.


Zombie* newZombie( std::string name ){
	
	Zombie *small_teehtless_one = new Zombie(name);

	return small_teehtless_one;
}
