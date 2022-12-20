//
//  Animal.hpp
//  cpp04_00
//
//  Created by Julia Demura on 28/11/2022.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <iostream>
#include <string>

class Animal{
	
protected:
	std::string _type;
	
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal & src);
	Animal &operator=(Animal const & src);
	std::string getType() const;
	virtual void	makeSound() const;
};

#endif /* Animal_hpp */
