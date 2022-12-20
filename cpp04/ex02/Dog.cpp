//
//  Dog.cpp
//  cpp04_02
//
//  Created by Julia Demura on 28/11/2022.
//

#include "Dog.hpp"

Dog::Dog() : ABS_Animal(){
	_type = "Dog";
	try {
		_dog_brain = new Brain();
	} catch (std::bad_alloc) {
		std::cout << "new failed us";
	}
	
	std::cout << "Default constructor : Dog" << std::endl;
}

Dog::~Dog(){
	delete _dog_brain;
	std::cout << "Destructor : Dog" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "woff woff" << std::endl;
}

Dog::Dog(const Dog &src){
	*this = src;
	std::cout << "Copy constructor : Dog" << std::endl;
}

Dog& Dog::operator=(const Dog &src){
	
	_type = src._type;
	
	try {
		_dog_brain = new Brain(*src._dog_brain);
	} catch (std::bad_alloc) {
		std::cout << "new failed us";
	}
	return *this;
}
