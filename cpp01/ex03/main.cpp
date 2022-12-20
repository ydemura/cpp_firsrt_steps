//
//  main.cpp
//  cpp01_03
//
//  Created by Julia Demura on 17/11/2022.
//

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("A1_weapon_type");
		HumanA bob("Bob(A)", club);
		std::cout << std::endl;
		bob.attack();
		club.setType("A2_weapon_type");
		bob.attack();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		Weapon club = Weapon("B1_weapon_type");
		HumanB jim("Jim(B)");
		std::cout << std::endl;
		jim.setWeapon(club);
		jim.attack();
		club.setType("B2_weapon_type");
		jim.attack();
		std::cout << std::endl;
	}
	return 0;
}
