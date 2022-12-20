//
//  RobotomyRequestForm.hpp
//  cpp05_03
//
//  Created by Julia Demura on 02/12/2022.
//

#ifndef RobotomyRequestForm_hpp
#define RobotomyRequestForm_hpp

#include <iostream>
#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
	
private:
	std::string _target;
	
public:
	
	RobotomyRequestForm(std::string new_tagret);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &src);
	~RobotomyRequestForm();
	
	void execute(Bureaucrat const & executor) const;

};

#endif /* RobotomyRequestForm_hpp */
