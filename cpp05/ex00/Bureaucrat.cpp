//
//  Bureaucrat.cpp
//  cpp05_00
//
//  Created by Julia Demura on 30/11/2022.
//

//https://www.sandordargo.com/blog/2020/11/11/when-use-const-2-member-variables

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
	
	std::cout << "Default constructor : Bureaucrat" << std::endl;
}

void	validateGrade(unsigned int grade) {
	
	if (grade < TOP)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > LOW)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string new_name, unsigned int new_grade) : _name(new_name), _grade(new_grade){
	
	validateGrade(new_grade);
	std::cout << "Parameter constructor : Bureaucrat" << std::endl;
}

Bureaucrat::~Bureaucrat(){
	
	std::cout << "Default destructor : Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src){
	
	*this = src;
	std::cout << "Copy constructor : Bureaucrat" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src) {
	
	
	if ( this != &src ){
		
		_grade = src.getGrade();
		std::string *tmp;
		tmp = const_cast<std::string *>(&_name);
		*tmp = src._name;
	}
	return *this;
}

const std::string Bureaucrat::getName() const{
	return _name;
}

unsigned int Bureaucrat::getGrade() const{
	return _grade;
}

void	Bureaucrat::incrementGrade(){
	
	validateGrade(_grade - 1);
	if (_grade - 1 > TOP)
		_grade--;
	
}
void	Bureaucrat::decrenentGrade(){
	
	validateGrade(_grade);
	if (_grade + 1 < LOW)
		_grade++;
}

std::ostream& operator<<( std::ostream& _stream_src, const Bureaucrat& clas_ref ) {
	_stream_src << clas_ref.getName() << ", bureaucrat grade " << clas_ref.getGrade();
	return _stream_src;
}
