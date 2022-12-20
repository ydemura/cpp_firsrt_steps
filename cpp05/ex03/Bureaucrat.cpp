//
//  Bureaucrat.cpp
//  cpp05_03
//
//  Created by Julia Demura on 30/11/2022.
//

//https://www.sandordargo.com/blog/2020/11/11/when-use-const-2-member-variables

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
	
	std::cout << "Default constructor : Bureaucrat" << std::endl;
}

Bureaucrat::~Bureaucrat(){
	
	std::cout << "Destructor : Bureaucrat" << std::endl;
}

void	validateGradeBureacrat(unsigned int grade) {
	
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string new_name, unsigned int new_grade) : _name(new_name), _grade(new_grade){
	
	validateGradeBureacrat(new_grade);
	std::cout << "Parameter constructor : Bureaucrat" << std::endl;
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
	
	validateGradeBureacrat(_grade - 1);
	if (_grade - 1 > 1)
		_grade--;
	
}
void	Bureaucrat::decrenentGrade(){
	
	validateGradeBureacrat(_grade);
	if (_grade + 1 < 150)
		_grade++;
}

void Bureaucrat::signAForm(AForm &AForma){

	try {
		AForma.beSigned(*this);
	} catch (AForm::GradeTooLowException & e) {
		std::cout << getName() << " couldn't sign " << AForma.getName() << " with grade : " << AForma.getGradeSgn() << " bacause his grade is : " << getGrade() << std::endl;
	}
	
}

void    Bureaucrat::executeForm( const AForm& form ) const{
	try {
		form.execute(*this);
	} catch (AForm::GradeTooLowException &e) {
		std::cout << _name << " cannot execute " << form.getName() << std::endl;
	}
//	if (this->getGrade() > form.getGradeEx())
//		throw Bureaucrat::GradeTooLowException();
//	else
//		form.execute(*this);
}

std::ostream& operator<<( std::ostream& _stream_src, const Bureaucrat& clas_ref ) {
	_stream_src << clas_ref.getName() << ", bureaucrat grade : " << clas_ref.getGrade();
	return _stream_src;
}


