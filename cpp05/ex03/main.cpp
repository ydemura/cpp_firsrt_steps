//
//  main.cpp
//  cpp05_03
//
//  Created by Julia Demura on 02/12/2022.
//

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {

	
	std::cout << std::endl << "-----------1-----------" << std::endl << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	std::cout << std::endl << "-----------1-----------" << std::endl << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "TEST");
		std::cout << rrf->getName() << std::endl;
		Bureaucrat sam("Sam", 1);
		sam.signAForm(*rrf);
		sam.executeForm(*rrf);
		delete rrf;
	}
	
	return 0;
}
