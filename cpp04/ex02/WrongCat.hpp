//
//  WrongCat.hpp
//  cpp04_01
//
//  Created by Julia Demura on 29/11/2022.
//

#ifndef WrongCat_hpp
#define WrongCat_hpp

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal{
	
private:
	std::string _type;
	
public:
	WrongCat();
	~WrongCat();
	void	makeWrongSound() const;
};

#endif /* WrongCat_hpp */
