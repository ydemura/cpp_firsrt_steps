//
//  main.cpp
//  cpp05_02
//
//  Created by Julia Demura on 02/12/2022.
//

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	
	ShrubberyCreationForm shr("SHR");
	RobotomyRequestForm rbt("RBT");
	PresidentialPardonForm prs("PRS");
	
	std::cout << std::endl << "-----------1-----------" << std::endl << std::endl;
	{
		Bureaucrat sam("Sam", 1);
		sam.signAForm(shr);
		sam.executeForm(shr);
		sam.signAForm(rbt);
		sam.executeForm(rbt);
		sam.signAForm(prs);
		sam.executeForm(prs);
	}
	std::cout << std::endl << "------------2----------" << std::endl << std::endl;
	{
		Bureaucrat sam("SlowSam", 150);
		sam.signAForm(shr);
		sam.executeForm(shr);
		sam.signAForm(rbt);
		sam.executeForm(rbt);
		sam.signAForm(prs);
		sam.executeForm(prs);
	}
	std::cout << std::endl << "------------3----------" << std::endl << std::endl;
	{
		Bureaucrat sam("MiddleSam", 45);
		sam.signAForm(shr);
		sam.executeForm(shr);
		sam.signAForm(rbt);
		sam.executeForm(rbt);
		sam.signAForm(prs);
		sam.executeForm(prs);
	}
	return 0;
}
