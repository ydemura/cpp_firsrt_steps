//
//  main.cpp
//  cpp05_00
//
//  Created by Julia Demura on 30/11/2022.
//

#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	
	{
		try {
			Bureaucrat("Steve", 0);
		} catch (Bureaucrat::GradeTooHighException & e) {
			std::cout << "too smart" << std::endl;
		} catch (Bureaucrat::GradeTooLowException & e) {
			std::cout << "too low" << std::endl;
		}
	}
	std::cout << "-----------------------" << std::endl;
	{
		try {
			Bureaucrat("Steve", 160);
		} catch (Bureaucrat::GradeTooHighException & e) {
			std::cout << "too smart" << std::endl;
		} catch (Bureaucrat::GradeTooLowException & e) {
			std::cout << "too low" << std::endl;
		}
	}
	std::cout << "-----------------------" << std::endl;
	{
		try {
			Bureaucrat("Steve", 30);
		} catch (Bureaucrat::GradeTooHighException & e) {
			std::cout << "too smart" << std::endl;
		} catch (Bureaucrat::GradeTooLowException & e) {
			std::cout << "too low" << std::endl;
		}
	}
	std::cout << "-----------------------" << std::endl;
	{
		Bureaucrat a("Jong", 2);
		Bureaucrat b = a;
		std::cout << a.getName() << std::endl;
		std::cout << b.getName() << std::endl;
	}
	std::cout << "-----------------------" << std::endl;
	{
		Bureaucrat a("Jong", 1);
		std::cout << a.getGrade() << std::endl;
		try {
			a.incrementGrade();
		} catch (Bureaucrat::GradeTooHighException & e) {
			std::cout << "too smart" << std::endl;
		}
		std::cout << a.getGrade() << std::endl;
	}
	
	return 0;
}
