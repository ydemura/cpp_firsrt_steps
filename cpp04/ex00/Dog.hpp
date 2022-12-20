//
//  Dog.hpp
//  cpp04_00
//
//  Created by Julia Demura on 28/11/2022.
//

#ifndef Dog_hpp
#define Dog_hpp

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal{
	
public:
	Dog();
	~Dog();
	void makeSound() const;
};

#endif /* Dog_hpp */
