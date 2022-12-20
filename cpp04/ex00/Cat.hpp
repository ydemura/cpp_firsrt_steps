//
//  Cat.hpp
//  cpp04_00
//
//  Created by Julia Demura on 28/11/2022.
//

#ifndef Cat_hpp
#define Cat_hpp

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal{
	
public:
	Cat();
	~Cat();
	void	makeSound() const;
};

#endif /* Cat_hpp */
