//
//  Bureaucrat.hpp
//  cpp05_01
//
//  Created by Julia Demura on 30/11/2022.
//

#ifndef Bureaucrat_hpp
#define Bureaucrat_hpp

#include <iostream>
#include <string>
class Bureaucrat;
#include "Form.hpp"

//Lastly, add a signForm() member function to the Bureaucrat. If the form got signed,
//it will print something like:
// <bureaucrat> signed <form>
//Otherwise, it will print something like:
// <bureaucrat> couldn’t sign <form> because <reason>

class Bureaucrat{
	
private:
	const std::string _name;
	unsigned int _grade;
	
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string new_name, unsigned int new_grade);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat& operator=(const Bureaucrat &src);
	
	const std::string getName() const;
	unsigned int getGrade() const;
	void	incrementGrade();
	void	decrenentGrade();

	class GradeTooHighException : public std::exception {};
	class GradeTooLowException  : public std::exception {};
	
	void signForm(Form &forma);
};

std::ostream& operator<<(std::ostream &src, const Bureaucrat &class_fer);


#endif /* Bureaucrat_hpp */
