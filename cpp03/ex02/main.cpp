//
//  main.cpp
//  cpp03_02
//
//  Created by Julia Demura on 23/11/2022.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	
	{
		ClapTrap lovely("Lovely");
		lovely.attack("this good guy");
		lovely.takeDamage(5);
		lovely.beRepaired(6);
		lovely.attack("another good someone");
		lovely.takeDamage(50);
	}
	std::cout << std::endl;
	{
		ScavTrap hunty("Hunty");
		hunty.attack("anyone around");
		hunty.takeDamage(15);
		hunty.beRepaired(5);
		hunty.takeDamage(50);
		hunty.guardGate();
	}
	std::cout << std::endl;
	{
		FragTrap flower("Bloomy");
		flower.attack("all nearby plants");
		flower.takeDamage(3);
		flower.beRepaired(0);
		flower.takeDamage(50);
		flower.takeDamage(50);
		flower.highFivesGuys();
	}

	return 0;
}
