//
//  Animal.hpp
//  cpp04_01
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
	Animal(std::string new_type);
	virtual ~Animal();
	Animal(const Animal & src);
	Animal &operator=(Animal const & src);
	std::string getType() const;
	virtual void	makeSound() const;
};

#endif /* Animal_hpp */
