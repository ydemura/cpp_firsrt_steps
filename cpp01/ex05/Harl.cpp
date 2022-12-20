//
//  Harl.cpp
//  cpp_01_05
//
//  Created by Julia Demura on 18/11/2022.
//

#include "Harl.hpp"

Harl::Harl(){
	std::cout << "Constructor : Harl" << std::endl;
}

Harl::~Harl(){
	std::cout << "Destructor : Harl" << std::endl;
}

void Harl::_debug( void ){
	
	std::cout << "DEBUG short is not bad" << std::endl;
}

void Harl::_info( void ){
	
	std::cout << "INFO knowledge is power" << std::endl;
}

void Harl::_warning( void ){
	
	std::cout << "WARNING dont look back" << std::endl;
}

void Harl::_error( void ){
	
	std::cout << "ERROR you pick a wrong chair" << std::endl;
}

void Harl::complain( std::string level ){
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	void (Harl::*say[4])() = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	
	for(int i = 0; i < 4; i++){
		if (level.compare(levels[i]) == 0) {
			(this->*say[i])();
		}
	}
	std::cout << "Harl lost his words and is crying in the corner" << std::endl << std::endl;
	
}
