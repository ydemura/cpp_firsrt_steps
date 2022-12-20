//
//  main.cpp
//  cpp_xcode
//
//  cpp02
//
//  Created by Julia Demura on 15/11/2022.
//

#include "Fixed.hpp"

int main( void ) {
	
	
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	
	return 0;
}
