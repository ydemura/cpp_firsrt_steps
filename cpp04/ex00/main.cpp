//
//  main.cpp
//  cpp04_00
//
//  Created by Julia Demura on 28/11/2022.
//

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl;
	std::cout <<  "---------------------------------------" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		
		//muted as was none in subject
//		delete meta;
//		delete j;
//		delete i;
	}
	
	std::cout << std::endl;
	std::cout <<  "---------------------------------------" << std::endl;
	std::cout <<  "DESTRUCTOR TESTS" << std::endl;
	std::cout <<  "no virtual destructor in WRONG animal" << std::endl << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	
	std::cout << std::endl;
	std::cout <<  "---------------------------------------" << std::endl;
	{

		const Animal* meta = new Animal();
		const Animal* j = new Cat();
		const WrongAnimal* i = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getWrongType() << " " << std::endl;
		i->makeWrongSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
		
	}
	std::cout << std::endl;
	std::cout <<  "---------------------------------------" << std::endl;
	{

		//const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getWrongType() << " " << std::endl;
		i->makeWrongSound();
		//meta->makeWrongSound();
		//delete meta;
		delete i;
	}

	return 0;
}
