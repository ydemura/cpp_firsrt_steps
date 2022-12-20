//
//  AAForm.hpp
//  cpp05_03
//
//  Created by Julia Demura on 01/12/2022.
//

#ifndef AAForm_hpp
#define AAForm_hpp

#include <iostream>
#include <string>
class AForm;
#include "Bureaucrat.hpp"

//Now, add the execute(Bureaucrat const & executor) const member function to
//the base form and implement a function to execute the form’s action of the concrete
//classes. You have to check that the form is signed and that the grade of the bureaucrat
//attempting to execute the form is high enough. Otherwise, throw an appropriate exception.

class AForm{

private:
	const std::string _name;
	bool _sign;
	const int _min_grade_sgn;
	const int _min_grade_ex;
public:
	
	//canonic
	AForm(int grade_s, int grade_ex, std::string name);
	virtual ~AForm();
	AForm(const AForm &src);
	AForm& operator=(const AForm &src);
	// getters
	const int	getGradeEx() const;
	const int getGradeSgn() const;
	bool isSigned() const;
	const std::string getName() const;
	//throws
	class GradeTooHighException : public std::exception{ };
	class GradeTooLowException : public std::exception{ };
	
	//members
	void	beSigned(const Bureaucrat &John_Snow);
	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream &src, const AForm &class_fer);

#endif /* AForm_hpp */
