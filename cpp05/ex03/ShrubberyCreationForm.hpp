//
//  ShrubberyCreationForm.hpp
//  cpp05_03
//
//  Created by Julia Demura on 02/12/2022.
//

#ifndef ShrubberyCreationForm_hpp
#define ShrubberyCreationForm_hpp

#include <iostream>
#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
	
private:
	std::string _target;
	
public:
	
	ShrubberyCreationForm(std::string new_tagret);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm();
	
	void execute(Bureaucrat const & executor) const;

};

#endif /* ShrubberyCreationForm_hpp */
