//
//  ShrubberyCreationForm.cpp
//  cpp05_02
//
//  Created by Julia Demura on 02/12/2022.
//

#include "ShrubberyCreationForm.hpp"
#include <fstream>

//Required grades: sign 145, exec 137
//Create a file <target>_shrubbery in the working directory, and writes ASCII trees
//inside it.

ShrubberyCreationForm::ShrubberyCreationForm(std:: string new_tagret) : AForm(145, 137, new_tagret), _target(new_tagret){
	std::cout << "Constructor : ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "Destructor : ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src._target) {
		std::cout << "Copy constructor : ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src){
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	
	if (executor.getGrade() > this->getGradeEx())
		throw AForm::GradeTooLowException();
	else {
		std::string filename;
		filename.append(_target);
		filename.append("_shrubbery");
		std::ofstream file;
		file.open(filename);
		if (file.is_open()){
			file << "			* *" << std::endl;
			file << "		 *    *  *" << std::endl;
			file << "	*  *    *     *  *" << std::endl;
			file << "   *     *    *  *    *" << std::endl;
			file << "* *   *    *    *    *   *" << std::endl;
			file << "*     *  *    * * .#  *   *" << std::endl;
			file << "*   *     * #.  .# *   *" << std::endl;
			file << "*      #.  #: #. * *    *" << std::endl;
			file << "*   * *  #. ##:       *" << std::endl;
			file << " *        .###" << std::endl;
			file << "		    .##" << std::endl;
			file << "			 ##." << std::endl;
			file << "			 .##:" << std::endl;
			file << "			 :###" << std::endl;
			file << "			 ;###" << std::endl;
			file << "  		   ,####." << std::endl;
			file << "________.######._героям_вічна_слава_" << std::endl << std::endl;
			file.close();
		} else {
			std::cout << "open failed" << std::endl;
			return ;
		}
	}
	std::cout << executor.getName() << " executed ShrubberyCreationForm" << std::endl;
}
