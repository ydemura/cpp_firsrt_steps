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
//src:
//https://stackoverflow.com/questions/10067510/fixed-point-arithmetic-in-c-programming
//https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html
//https://github.com/achrafelkhnissi/CPP_Modules/blob/master/Module_02/ex01/Fixed.cpp
//https://en.cppreference.com/w/cpp/language/operators
//https://www.geeksforgeeks.org/pre-increment-and-post-increment-in-c/
//https://stackoverflow.com/questions/15244094/overloading-for-both-pre-and-post-increment

class Fixed{
	
public:
	
	//00
	Fixed();
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const & src);
	~Fixed();
	
	//01
	Fixed(const int n);
	Fixed(float flt);
	float	toFloat( void ) const;
	int		toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	//02
	//• The 6 comparison operators: >, <, >=, <=, == and !=.
	bool operator>(Fixed const & src);
	bool operator<(Fixed const & src);
	bool operator>=(Fixed const & src);
	bool operator<=(Fixed const & src);
	bool operator==(Fixed const & src);
	bool operator!=(Fixed const & src);
	
	//The 4 arithmetic operators: +, -, *, and /.
	Fixed operator+(Fixed const & src);
	Fixed operator-(Fixed const & src);
	Fixed operator*(Fixed const & src);
	Fixed operator/(Fixed const & src);
	
	//The 4 increment/decrement
	Fixed operator++(int);
	Fixed & operator++(void);
	Fixed operator--(int);
	Fixed & operator--(void);
	
	//Public overloaded member functions
	static Fixed & min(Fixed & one, Fixed & two);
	static const Fixed & min(Fixed const & one, Fixed const & two);
	static Fixed & max(Fixed & one, Fixed & two);
	static const Fixed & max(Fixed const & one, Fixed const & two);

private:
	int _fixed_point_number_value;
	static const int _nof_fractional_bits = 8;
	
};

std::ostream & operator<<(std::ostream & var, Fixed const & class_ref);

#endif /* Fixed_hpp */
