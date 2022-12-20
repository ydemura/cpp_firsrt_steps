//
//  Fixed.cpp
//  cpp02_00
//
//  Created by Julia Demura on 19/11/2022.
//

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_number_value(0){
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
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point_number_value;
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point_number_value = raw;
}
