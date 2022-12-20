//
//  Brain.cpp
//  cpp04_02
//
//  Created by Julia Demura on 29/11/2022.
//

#include "Brain.hpp"


Brain::Brain(){
	std::cout << "Default constructor : Brain" << std::endl;
}

Brain::~Brain(){
	std::cout << "Destructor : Brain" << std::endl;
}

Brain::Brain(const Brain &src){
	
	*this = src;
	std::cout << "Copy constructor : Brain" << std::endl;
}

Brain& Brain::operator=(const Brain &src){
	
	for (int i = 0; i < 100; i++) {
		_ideas[i] = src._ideas[i];
	}
	std::cout << "Copy constructor : Brain" << std::endl;
	return *this;
}
