//
//  Cat.cpp
//  cpp04_00
//
//  Created by Julia Demura on 28/11/2022.
//

#include "Cat.hpp"

Cat::Cat() : Animal() {
	_type = "Cat";
	std::cout << "Default constructor : Cat" << std::endl;
}

Cat::~Cat(){
	std::cout << "Destructor : Cat" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "meow meow" << std::endl;
}
