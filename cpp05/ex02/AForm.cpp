//
//  AAForm.cpp
//  cpp05_02
//
//  Created by Julia Demura on 01/12/2022.
//

#include "AForm.hpp"

void	validateGradeAForm(unsigned int grade) {
	
	if (grade < 1)
		throw AForm::GradeTooHighException();
	else if (grade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(int grade_s, int grade_ex, std::string name) : _min_grade_sgn(grade_s), _min_grade_ex(grade_ex), _name(name){
	
	
	validateGradeAForm(grade_s);
	validateGradeAForm(grade_ex);
	std::cout << "Default constructor : AForm" << std::endl;
}

AForm::~AForm(){
	
	std::cout << "Destructor : AForm" << std::endl;
}

AForm::AForm(const AForm &src) : _name(src.getName()), _min_grade_ex(src.getGradeEx()), _min_grade_sgn(src.getGradeSgn()){
	
	*this = src;
	std::cout << "Copy constructor : AForm" << std::endl;
}

AForm& AForm::operator=(const AForm &src){
	
	if ( this != &src ){

		_sign = src.isSigned();
	}
	return *this;
}

const int	AForm::getGradeEx() const{
	return _min_grade_ex;
}

const int AForm::getGradeSgn() const{
	return _min_grade_sgn;
}

bool AForm::isSigned() const{
	return _sign;
}

const std::string AForm::getName() const{
	return _name;
}

std::ostream& operator<<(std::ostream &src, const AForm &clas_ref){
	
	std::cout << "------------AForm :" << std::endl;
	std::cout << "name             : " << clas_ref.getName() << std::endl;
	std::cout << "grade to execute : " << clas_ref.getGradeEx() << std::endl;
	std::cout << "grade to sign    : " << clas_ref.getName() << std::endl;
	std::cout << "is signed        : " << clas_ref.isSigned() << std::endl;
	std::cout << "-----------------" << std::endl;
	return src;
}

void	AForm::beSigned(const Bureaucrat &John_Snow){
	
	///validateGrade(John_Snow.getGrade()); - not sure, as if we created Bureaucrate he has to be validated already
	if (John_Snow.getGrade() > _min_grade_sgn){
		throw AForm::GradeTooLowException();
	} else {
		_sign = true;
		std::cout << John_Snow.getName() << " signed " << getName() << std::endl;
	}
}

//Now, add the execute(Bureaucrat const & executor) const member function to
//the base form and implement a function to execute the form’s action of the concrete
//classes. You have to check that the form is signed and that the grade of the bureaucrat
//attempting to execute the form is high enough. Otherwise, throw an appropriate exception.

void execute(Bureaucrat const & executor) {
	std::cout << "this makes Form an abstract class" << std::endl;
}
