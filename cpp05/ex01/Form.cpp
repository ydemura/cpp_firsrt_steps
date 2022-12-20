//
//  Form.cpp
//  cpp05_01
//
//  Created by Julia Demura on 01/12/2022.
//

#include "Form.hpp"

void	validateGradeForm(unsigned int grade) {
	
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(int grade_s, int grade_ex, std::string name) : _min_grade_sgn(grade_s), _min_grade_ex(grade_ex), _name(name){
	
	
	validateGradeForm(grade_s);
	validateGradeForm(grade_ex);
	std::cout << "Default constructor : Form" << std::endl;
}

Form::~Form(){
	
	std::cout << "Destructor : Form" << std::endl;
}

Form::Form(const Form &src) : _name(src.getName()), _min_grade_ex(src.getGradeEx()), _min_grade_sgn(src.getGradeSgn()){
	
	*this = src;
	std::cout << "Copy constructor : Form" << std::endl;
}

Form& Form::operator=(const Form &src){
	
	if ( this != &src ){

		_sign = src.isSigned();
	}
	return *this;
}

const int	Form::getGradeEx() const{
	return _min_grade_ex;
}

const int Form::getGradeSgn() const{
	return _min_grade_sgn;
}

bool Form::isSigned() const{
	return _sign;
}

const std::string Form::getName() const{
	return _name;
}

std::ostream& operator<<(std::ostream &src, const Form &clas_ref){
	
	std::cout << "------------Form :" << std::endl;
	std::cout << "name             : " << clas_ref.getName() << std::endl;
	std::cout << "grade to execute : " << clas_ref.getGradeEx() << std::endl;
	std::cout << "grade to sign    : " << clas_ref.getName() << std::endl;
	std::cout << "is signed        : " << clas_ref.isSigned() << std::endl;
	std::cout << "-----------------" << std::endl;
	return src;
}

void	Form::beSigned(const Bureaucrat &John_Snow){
	
	///validateGrade(John_Snow.getGrade()); - not sure, as if we created Bureaucrate he has to be validated already
	if (John_Snow.getGrade() > _min_grade_sgn){
		throw Form::GradeTooLowException();
	} else {
		_sign = true;
		std::cout << John_Snow.getName() << " signed " << getName() << std::endl;
	}
}
