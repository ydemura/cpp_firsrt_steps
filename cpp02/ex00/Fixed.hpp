//
//  Fixed.hpp
//  cpp02_00
//
//  Created by Julia Demura on 19/11/2022.
//

#ifndef Fixed_hpp
#define Fixed_hpp

#include <stdio.h>
#include <iostream>
#include <string>

//https://cplusplus.com/doc/tutorial/operators/

class Fixed{
	
public:
	Fixed();
	Fixed(Fixed const &src); ///◦ A copy constructor.
	Fixed &operator=(Fixed const & src); ///◦ A copy assignment operator overload.
	~Fixed();
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
private:
	int _fixed_point_number_value;
	static const int _nof_fractional_bits = 8;
};

#endif /* Fixed_hpp */
