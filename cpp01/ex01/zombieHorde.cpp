//
//  zombieHorde.cpp
//  cpp_xcode
//
//  Created by Julia Demura on 17/11/2022.
//

#include "Zombie.hpp"
#include <iostream>
#include <new>

Zombie* zombieHorde( int N, std::string name ){
	
	Zombie*	Horde = new Zombie[N];

	for (int i = 0; i < N; i++){
		
		Horde[i].give_name(name);
	}
	return Horde;
}
