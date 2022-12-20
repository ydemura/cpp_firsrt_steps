//
//  ABS_Animal.cpp
//  cpp04_02
//
//  Created by Julia Demura on 28/11/2022.
//

#include "ABS_Animal.hpp"

ABS_Animal::ABS_Animal() : _type("random"){
	std::cout << "Default constructor : ABS_Animal" << std::endl;
}

ABS_Animal::~ABS_Animal(){
	std::cout << "Destructor : ABS_Animal" << std::endl;
}

ABS_Animal::ABS_Animal(std::string new_type) : _type(new_type){
	std::cout << "Constructor with string type : ABS_Animal" << std::endl;
}

ABS_Animal::ABS_Animal(const ABS_Animal & src){
	
	*this = src;
	std::cout << "Copy constructor : ABS_Animal" << std::endl;
}

ABS_Animal & ABS_Animal::operator=(ABS_Animal const & src){
	
	_type = src._type;
	return *this;
}

std::string ABS_Animal::getType() const {
	return _type;
}

void	ABS_Animal::makeSound() const{
	std::cout << "ABS_Animal make sound" << std::endl;
}
