//
//  Fixed.cpp
//  cpp02_01
//
//  Created by Julia Demura on 21/11/2022.
//

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point_number_value(0) {
	std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed &src){
	
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src){
	
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point_number_value = src.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const{
	return this->_fixed_point_number_value;
}

void Fixed::setRawBits( int const raw ){
	this->_fixed_point_number_value = raw;
}

Fixed::Fixed(const int n) : _fixed_point_number_value(n << _nof_fractional_bits) {
	std::cout << "Int constructor called" << std::endl;
	
}

Fixed::Fixed(float flt) : _fixed_point_number_value(std::roundf(flt * (1 << _nof_fractional_bits))) {
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const{
	return (float)getRawBits() / (float)(1 << _nof_fractional_bits);
}

int Fixed::toInt( void ) const{
	return _fixed_point_number_value >> _nof_fractional_bits;
}

std::ostream & operator<<(std::ostream & var, Fixed const & class_ref){
	
	var << class_ref.toFloat();
	return var;
}
