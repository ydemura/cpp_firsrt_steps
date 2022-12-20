//
//  main.cpp
//  cpp04_01
//
//  Created by Julia Demura on 29/11/2022.
//

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

//In your main function, create and fill an array of Animal objects. Half of it will be Dog objects and the other half will be Cat objects. At the end of your program execution, loop over this array and delete every Animal. You must delete directly dogs and cats as Animals. The appropriate destructors must be called in the expected order.
//A copy of a Dog or a Cat mustn’t be shallow. Thus, you have to test that your copies are deep copies!
//https://www.geeksforgeeks.org/shallow-copy-and-deep-copy-in-c/

int main()
{
	std::cout << "----------------------" << std::endl;
	std::cout << "     ARRAY TEST       " << std::endl;
	{
		const Animal *animals[6] = { new Cat(), new Cat(), new Cat(), new Dog(), new Dog(), new Dog()};
		animals[0]->makeSound();
		animals[1]->makeSound();
		animals[2]->makeSound();
		animals[3]->makeSound();
		animals[4]->makeSound();
		animals[5]->makeSound();
		for (int i = 0; i < 6; i++){
			delete animals[i];
		}
		
		
	}
	std::cout << std::endl;
	std::cout << "----------------------" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::endl;
	std::cout << "----------------------" << std::endl;
	{
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << std::endl;
		std::cout << dog->getType() << " make sound : ";
		dog->makeSound();
		std::cout << cat->getType() << " make sound : ";
		cat->makeSound();
		delete dog;
		delete cat;
	}
	std::cout << std::endl;
	std::cout << "----------------------" << std::endl;
	
	{
		Animal *animal = new Animal();
		animal->makeSound();
		std::cout << animal->getType() << std::endl;
	}
	
	std::cout << std::endl;
	
	
	
	return 0;
}
