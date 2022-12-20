//
//  main.cpp
//  cpp03_00
//
//  Created by Julia Demura on 23/11/2022.
//

#include "ClapTrap.hpp"

int main(void) {
	
	ClapTrap lovely("Lovely");
	lovely.attack("this good guy");
	lovely.takeDamage(5);
	lovely.beRepaired(6);
	lovely.attack("another good someone");
	lovely.takeDamage(50);
	return 0;
}
