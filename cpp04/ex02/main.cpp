//
//  main.cpp
//  cpp04_02
//
//  Created by Julia Demura on 29/11/2022.
//

#include <iostream>
#include "ABS_Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


//https://en.cppreference.com/w/cpp/language/abstract_class
//https://www.ibm.com/docs/en/zos/2.4.0?topic=only-abstract-classes-c
//https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm

//The purpose of an abstract class (often referred to as an ABC) is to provide an appropriate base class from which other classes can inherit. Abstract classes cannot be used to instantiate objects and serves only as an interface. Attempting to instantiate an object of an abstract class causes a compilation error.
//
//Thus, if a subclass of an ABC needs to be instantiated, it has to implement each of the virtual functions, which means that it supports the interface declared by the ABC. Failure to override a pure virtual function in a derived class, then attempting to instantiate objects of that class, is a compilation error.
//
//Classes that can be used to instantiate objects are called concrete classes.

int main()
{
//	std::cout << "----------------------" << std::endl;
//	std::cout << "     ARRAY TEST       " << std::endl;
//	{
//		const ABS_Animal *ABS_Animals[6] = { new Cat(), new Cat(), new Cat(), new Dog(), new Dog(), new Dog()};
//		for (int i = 0; i < 6; i++){
//			delete ABS_Animals[i];
//		}
//
//	}
	std::cout << std::endl;
	std::cout << "----------------------" << std::endl;
	{
		const ABS_Animal* j = new Dog();
		const ABS_Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::endl;
	std::cout << "----------------------" << std::endl;
	{
		const ABS_Animal* dog = new Dog();
		const ABS_Animal* cat = new Cat();
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
	std::cout << std::endl;
	
	return 0;
}
