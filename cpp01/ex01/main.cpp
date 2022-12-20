//
//  main.cpp
//  cpp_xcode
//
//  cpp01/ex00
//
//  Created by Julia Demura on 15/11/2022.
//

#include "Zombie.hpp"

//Implement your own tests to ensure your zombieHorde() function works as expected.
//Try to call announce() for each one of the zombies.

int main(int argc, const char * argv[]) {
	
	int n = 3;
	Zombie * Hoard = zombieHorde(n, "good zombie");
	
	for (int i = 0; i < n; i++){
		std::cout << "Zombie number " << (i + 1) << " says:" << std::endl;
		Hoard[i].announce();
	}
	delete [] Hoard;
	return 0;
}
