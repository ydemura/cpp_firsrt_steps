//
//  Intern.hpp
//  cpp05_03
//
//  Created by Julia Demura on 04/12/2022.
//

#ifndef Intern_hpp
#define Intern_hpp

#include <iostream>
#include <string>
#include "AForm.hpp"

//However, the intern has one important capacity: the makeForm() function. It takes
//two strings. The first one is the name of a form and the second one is the target of the
//form. It return a pointer to a Form object (whose name is the one passed as parameter)
//whose target will be initialized to the second parameter.

typedef enum
{
	PRES = 0,
	ROB = 1,
	SHRBR = 2,
	ELSE = 3
} forms;


class Intern{
	
public:
	Intern();
	~Intern();
	Intern(const Intern &src);
	Intern& operator=(const Intern &src);
	
	AForm* makeForm(std::string name, std::string target);
};


#endif /* Intern_hpp */
