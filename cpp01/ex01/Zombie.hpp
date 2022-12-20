//
//  Zombie.hpp
//  cpp_xcode
//
//  Created by Julia Demura on 15/11/2022.
//

#ifndef Zombie_hpp
#define Zombie_hpp

#include <stdio.h>
#include <iostream>
#include <string>


//First, implement a Zombie class. It has a string private attribute name.

//Then, implement the two following functions ->> 2 cpp files


//Now, what is the actual point of the exercise? You have to determine in what case
//it’s better to allocate the zombies on the stack or heap.


class Zombie{
	
public:
	
	Zombie(void);
	~Zombie(void);

	void announce(void) const;
	void give_name(std::string new_name);
	
private:
	
	std::string _name;
	
};

Zombie* zombieHorde( int N, std::string name );

#endif /* Zombie_hpp */
