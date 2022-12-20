//
//  ABS_Animal.hpp
//  cpp04_02
//
//  Created by Julia Demura on 28/11/2022.
//

#ifndef ABS_Animal_hpp
#define ABS_Animal_hpp

#include <iostream>
#include <string>

class ABS_Animal{
	
protected:
	std::string _type;
	
public:
	
	ABS_Animal();
	ABS_Animal(std::string new_type);
	virtual ~ABS_Animal();
	ABS_Animal(const ABS_Animal & src);
	ABS_Animal &operator=(ABS_Animal const & src);
	std::string getType() const;
	virtual void	makeSound() const = 0;
};

#endif /* ABS_Animal_hpp */
