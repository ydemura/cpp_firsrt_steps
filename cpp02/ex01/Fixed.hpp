//
//  Fixed.hpp
//  cpp02_01
//
//  Created by Julia Demura on 21/11/2022.
//

#ifndef Fixed_hpp
#define Fixed_hpp

#include <iostream>
#include <cmath>

//Allowed functions : roundf (from <cmath>)
//https://stackoverflow.com/questions/10067510/fixed-point-arithmetic-in-c-programming

//https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html - check end

//https://github.com/achrafelkhnissi/CPP_Modules/blob/master/Module_02/ex01/Fixed.cpp

class Fixed{
	
public:
	
	Fixed();
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const & src);
	~Fixed();
	
	Fixed(const int n);
	Fixed(float flt);
	float	toFloat( void ) const;
	int		toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int _fixed_point_number_value;
	static const int _nof_fractional_bits = 8;
	
};

std::ostream & operator<<(std::ostream & var, Fixed const & class_ref);

#endif /* Fixed_hpp */
