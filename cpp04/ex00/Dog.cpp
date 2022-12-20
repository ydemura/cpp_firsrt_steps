//
//  Dog.cpp
//  cpp04_00
//
//  Created by Julia Demura on 28/11/2022.
//

#include "Dog.hpp"

Dog::Dog() : Animal(){
	_type = "Dog";
	std::cout << "Default constructor : Dog" << std::endl;
}

Dog::~Dog(){
	std::cout << "Destructor : Dog" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "woff woff" << std::endl;
}
