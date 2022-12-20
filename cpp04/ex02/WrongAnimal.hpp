//
//  WrongAnimal.hpp
//  cpp04_01
//
//  Created by Julia Demura on 29/11/2022.
//

#ifndef WrongAnimal_hpp
#define WrongAnimal_hpp

#include <iostream>
#include <string>

class WrongAnimal{
	
protected:
	std::string _type;
	
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal & src);
	WrongAnimal &operator=(WrongAnimal const & src);
	std::string getWrongType() const;
	virtual void	makeWrongSound() const;
};

#endif /* WrongAnimal_hpp */
