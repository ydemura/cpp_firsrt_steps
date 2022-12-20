//
//  Cat.hpp
//  cpp04_01
//
//  Created by Julia Demura on 28/11/2022.
//

#ifndef Cat_hpp
#define Cat_hpp

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal{
	
private:
	Brain* _cat_brain;
	
public:
	Cat();
	~Cat();
	Cat(const Cat &src);
	Cat& operator=(const Cat &src);
	void	makeSound() const;
};

#endif /* Cat_hpp */
