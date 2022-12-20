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


//• The 6 comparison operators: >, <, >=, <=, == and !=.

bool Fixed::operator>(const Fixed &src){
	return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator<(const Fixed &src){
	return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator>=(const Fixed &src){
	return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator<=(const Fixed &src){
	return (this->getRawBits() <= src.getRawBits());
}

bool Fixed::operator==(const Fixed &src){
	return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(const Fixed &src){
	return (this->getRawBits() != src.getRawBits());
}



//The 4 arithmetic operators: +, -, *, and /.
Fixed Fixed::operator+(Fixed const & src){
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed Fixed::operator-(Fixed const & src){
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed Fixed::operator*(Fixed const & src){
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/(Fixed const & src){
	return Fixed(this->toFloat() / src.toFloat());
}



//The 4 increment/decrement

// prefix
Fixed & Fixed::operator++(void){
	_fixed_point_number_value++;
	return *this;
}

Fixed & Fixed::operator--(void){
	_fixed_point_number_value--;
	return *this;
}

// postfix
Fixed Fixed::operator++(int){
	
	Fixed temp;
	temp.operator++();
	return temp;
}

Fixed Fixed::operator--(int){
	
	Fixed temp;
	temp.operator--();
	return temp;
}



//• Overloaded member functions:


Fixed & Fixed::min(Fixed & one, Fixed & two){
	return (one.getRawBits() <= two.getRawBits()? one : two);
}

const Fixed & Fixed::min(Fixed const & one, Fixed const & two){
	return (one.getRawBits() <= two.getRawBits() ? one : two);
}

Fixed & Fixed::max(Fixed & one, Fixed & two){

	return (one.getRawBits() >= two.getRawBits() ? one : two);
}

const Fixed & Fixed::max(Fixed const & one, Fixed const & two){

	return (one.getRawBits() >= two.getRawBits() ? one : two);
}
