//
//  WrongCat.cpp
//  cpp04_00
//
//  Created by Julia Demura on 29/11/2022.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	_type = "Wrong Cat";
	std::cout << "Default constructor : WrongCat" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "Destructor : WrongCat" << std::endl;
}

void WrongCat::makeWrongSound() const{
	std::cout << "ffffffffFFFFFFFFFFFfffffffff" << std::endl;
}
