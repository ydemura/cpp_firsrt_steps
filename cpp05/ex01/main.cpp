//
//  main.cpp
//  cpp05_01
//
//  Created by Julia Demura on 30/11/2022.
//

#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	
	std::cout << std::endl << "-----------1-----------" << std::endl << std::endl;
	{
		try {
			Bureaucrat("Steve", 0);
		} catch (Bureaucrat::GradeTooHighException & e) {
			std::cout << "too smart Bureaucrat" << std::endl;
		} catch (Bureaucrat::GradeTooLowException & e) {
			std::cout << "too low Bureaucrat" << std::endl;
		}
	}
	std::cout << std::endl << "------------2----------" << std::endl << std::endl;
	
	{
		try {
			Bureaucrat("Steve", 160);
		} catch (Bureaucrat::GradeTooHighException & e) {
			std::cout << "too smart Bureaucrat" << std::endl;
		} catch (Bureaucrat::GradeTooLowException & e) {
			std::cout << "too low Bureaucrat" << std::endl;
		}
	}
	std::cout << std::endl << "------------3----------" << std::endl << std::endl;
	{
		try {
			Form(0, 0, "failed");
		} catch (Form::GradeTooHighException & e) {
			std::cout << "too good form" << std::endl;
		} catch (Form::GradeTooLowException & e) {
			std::cout << "too bad form" << std::endl;
		}
	}
	std::cout << std::endl << "-----------4-----------" << std::endl << std::endl;
	{
		try {
			Form(160, 170, "failed");
		} catch (Form::GradeTooHighException & e) {
			std::cout << "too good form" << std::endl;
		} catch (Form::GradeTooLowException & e) {
			std::cout << "too bad form" << std::endl;
		}
	}
	std::cout << std::endl << "-----------5-----------" << std::endl << std::endl;
	{
		Bureaucrat James("James", 15);
		Form aFormA(16, 16, "form A");
		std::cout << James.getName() << std::endl;
		std::cout << aFormA.getName() << std::endl;
		James.signForm(aFormA);
	}
	std::cout << std::endl << "------------6----------" << std::endl << std::endl;
	{
		Bureaucrat James("James", 25);
		Form aFormA(16, 16, "form A");
		std::cout << James.getName() << std::endl;
		std::cout << aFormA.getName() << std::endl;
		James.signForm(aFormA);
	}
	std::cout << std::endl << "------------7----------" << std::endl << std::endl;
	{
		Bureaucrat James("James", 2);
		Form aFormA(2, 2, "form A");
		std::cout << James.getName() << std::endl;
		std::cout << aFormA.getName() << std::endl;
		James.signForm(aFormA);
		Form bFormB(2, 2, "form B");
		James.decrenentGrade();
		James.signForm(bFormB);
	}
	
	return 0;
}
