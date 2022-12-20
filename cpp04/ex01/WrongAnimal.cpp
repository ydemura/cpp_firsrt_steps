//
//  WrongAnimal.cpp
//  cpp04_01
//
//  Created by Julia Demura on 29/11/2022.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "Default constructor : WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Destructor : WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src){
	
	*this = src;
	std::cout << "Copy constructor : WrongAnimal" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src){
	
	_type = src._type;
	return *this;
}

std::string WrongAnimal::getWrongType() const {
	return _type;
}

void	WrongAnimal::makeWrongSound() const{
	std::cout << "Animal make WRONG SOUND" << std::endl;
}
