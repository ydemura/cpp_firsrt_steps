//
//  PresidentialPardonForm.hpp
//  cpp05_03
//
//  Created by Julia Demura on 02/12/2022.
//

#ifndef PresidentialPardonForm_hpp
#define PresidentialPardonForm_hpp

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
	
private:
	std::string _target;
	
public:
	
	PresidentialPardonForm(std::string new_tagret);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &src);
	~PresidentialPardonForm();
	
	void execute(Bureaucrat const & executor) const;

};

#endif /* PresidentialPardonForm_hpp */
