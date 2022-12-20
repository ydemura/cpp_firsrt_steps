//
//  Cat.cpp
//  cpp04_01
//
//  Created by Julia Demura on 28/11/2022.
//

#include "Cat.hpp"

Cat::Cat() : Animal() {
	_type = "Cat";
	
	try {
		_cat_brain = new Brain();
	} catch (std::bad_alloc) {
		std::cout << "new failed us";
	}
	std::cout << "Default constructor : Cat" << std::endl;
}

Cat::~Cat(){
	delete _cat_brain;
	std::cout << "Destructor : Cat" << std::endl;
}

Cat::Cat(const Cat &src){
	
	*this = src;
	std::cout << "Copy constructor : Cat" << std::endl;
}

Cat& Cat::operator=(const Cat &src){
	
	_type = src._type;
	try {
		_cat_brain = new Brain(*src._cat_brain);
	} catch (std::bad_alloc) {
		std::cout << "new failed us";
	}
	return *this;
}

void Cat::makeSound() const{
	std::cout << "meow meow" << std::endl;
}
