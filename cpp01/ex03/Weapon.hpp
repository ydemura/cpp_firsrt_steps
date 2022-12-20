//
//  Weapon.hpp
//  cpp01_03
//
//  Created by Julia Demura on 17/11/2022.
//

#ifndef Weapon_hpp
#define Weapon_hpp

#include <stdio.h>
#include <iostream>
#include <string>

//Implement a Weapon class that has:
//• A private attribute type, which is a string.
//• A getType() member function that returns a const reference to type.
//• A setType() member function that sets type using the new one passed as parameter.

class Weapon{
	
public:
	Weapon(std::string new_type);
	~Weapon();
	
const std::string& 	getType(void) const;
void setType(std::string new_type);
	
private:
	std::string _type;
	

	
};

#endif /* Weapon_hpp */
