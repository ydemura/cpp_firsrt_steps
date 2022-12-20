//
//  Harl.hpp
//  cpp_01_05
//
//  Created by Julia Demura on 18/11/2022.
//

#ifndef Harl_hpp
#define Harl_hpp

#include <iostream>
#include <string>

//https://cplusplus.com/forum/beginner/239227/


//Harl also has a public member function that calls the four member functions above
//depending on the level passed as parameter:

//void complain( std::string level );

//The goal of this exercise is to use pointers to member functions. This is not a
//suggestion. Harl has to complain without using a forest of if/else if/else. It doesn’t think
//twice!

class Harl{
	
public:
	Harl();
	~Harl();
	void complain( std::string level );
	
private:
	void _debug( void );
	void _info( void );
	void _warning( void );
	void _error( void );
	
};

#endif /* Harl_hpp */
