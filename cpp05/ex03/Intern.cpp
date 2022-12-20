//
//  Intern.cpp
//  cpp05_03
//
//  Created by Julia Demura on 04/12/2022.
//

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//
//It will print something like:
//Intern creates <form>
//If the form name passed as parameter doesn’t exist, print an explicit error message


Intern::Intern(){
	std::cout << "Constructor : Intern" << std::endl;
}
Intern::~Intern(){
	
	std::cout << "Destructor : Intern" << std::endl;
}
Intern::Intern(const Intern &src){
	
	*this = src;
	std::cout << "Copy constructor : Intern" << std::endl;
}
Intern& Intern::operator=(const Intern &src){
	return *this;
}

forms pick_form(std::string name){
	if (name.compare("robotomy request") == 0)
		return ROB;
	if (name.compare("shrubbery creation") == 0)
		return SHRBR;
	if (name.compare("presidential pardon") == 0)
		return PRES;
	else
		return ELSE;
}

AForm* Intern::makeForm(std::string name, std::string target){
	
	std::cout << "Intern creates ";
	switch (pick_form(name)) {
		case ELSE:
			std::cout << " ... well Intern tried, Intern creates nothing" << std::endl;
			return 0;
		case SHRBR:
			std::cout << "form " << name << std::endl;
			return  new ShrubberyCreationForm(target);
		case PRES:
			std::cout << "form " << name << std::endl;
			return  new PresidentialPardonForm(target);
		case ROB:
			std::cout << "form " << name << std::endl;
			return  new RobotomyRequestForm(target);
	}
	return 0;
}
