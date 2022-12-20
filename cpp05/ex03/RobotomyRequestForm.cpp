//
//  RobotomyRequestForm.cpp
//  cpp05_03
//
//  Created by Julia Demura on 02/12/2022.
//

#include "RobotomyRequestForm.hpp"

//Required grades: sign 72, exec 45
//Makes some drilling noises. Then, informs that <target> has been robotomized
//successfully 50% of the time. Otherwise, informs that the robotomy failed.

RobotomyRequestForm::RobotomyRequestForm(std:: string new_tagret) : AForm(72, 45, new_tagret), _target(new_tagret){
	std::cout << "Constructor : RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "Destructor : RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src), _target(src._target) {
		std::cout << "Copy constructor : RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &src){
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{

	if (executor.getGrade() > this->getGradeEx())
		throw AForm::GradeTooLowException();
	else {
		if (rand() % 2 == 0) {
			std::cout << this->_target << "is all good and was not harmed by any ideas of subject ->>> ";
		} else {
			std::cout << "nothing changed  ->>> ";
		}
		std::cout << "BTW reference to lobotomy is not fun" << std::endl;
		std::cout << executor.getName() << " executed RobotomyRequestForm" << std::endl;
		}
}
