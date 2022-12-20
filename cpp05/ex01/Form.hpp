//
//  Form.hpp
//  cpp05_01
//
//  Created by Julia Demura on 01/12/2022.
//

#ifndef Form_hpp
#define Form_hpp

#include <iostream>
#include <string>
class Form;
#include "Bureaucrat.hpp"

class Form{

private:
	const std::string _name;
	bool _sign;
	const int _min_grade_sgn;
	const int _min_grade_ex;
public:
	
	//canonic
	Form(int grade_s, int grade_ex, std::string name);
	~Form();
	Form(const Form &src);
	Form& operator=(const Form &src);
	
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
};

std::ostream& operator<<(std::ostream &src, const Form &class_fer);

#endif /* Form_hpp */
