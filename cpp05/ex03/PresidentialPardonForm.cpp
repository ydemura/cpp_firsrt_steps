//
//  PresidentialPardonForm.cpp
//  cpp05_03
//
//  Created by Julia Demura on 02/12/2022.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std:: string new_tagret) : AForm(25, 5, new_tagret), _target(new_tagret){
	std::cout << "Constructor : PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "Destructor : RobotomyRequestForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src), _target(src._target) {
		std::cout << "Copy constructor : PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &src){
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{

	if (executor.getGrade() > this->getGradeEx())
		throw AForm::GradeTooLowException();
	else {
		std::cout << "Informs that " << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		std::cout << executor.getName() << " executed PresidentialPardonForm" << std::endl;
		}
}
