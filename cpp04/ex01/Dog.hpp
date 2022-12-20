//
//  Dog.hpp
//  cpp04_01
//
//  Created by Julia Demura on 28/11/2022.
//

#ifndef Dog_hpp
#define Dog_hpp

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal{
	
private:
	Brain* _dog_brain;
	
public:
	Dog();
	~Dog();
	Dog(const Dog &src);
	Dog& operator=(const Dog &src);
	void makeSound() const;
};

#endif /* Dog_hpp */
