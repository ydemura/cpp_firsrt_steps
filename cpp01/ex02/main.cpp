//
//  main.cpp
//  cpp01_ex02
//
//  Created by Julia Demura on 17/11/2022.
//

#include <iostream>
#include <string>
//https://elearning.intra.42.fr/notions/piscine-c-d01-c-basics-2/subnotions/piscine-c-d01-c-basics-2-references/videos/references-420b32fe-9392-4bcc-a740-090f171d3bdc
// - intra video

//Write a program that contains:
//• A string variable initialized to "HI THIS IS BRAIN".
//• stringPTR: A pointer to the string.
//• stringREF: A reference to the string.


//Your program has to print:
//• The memory address of the string variable.
//• The memory address held by stringPTR.
//• The memory address held by stringREF.


//And then:
//• The value of the string variable.
//• The value pointed to by stringPTR.
//• The value pointed to by stringREF.


int main(int argc, const char * argv[]) {
	
	std::string string = "HI THIS IS BRAIN";
	
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	
	std::cout << "string    pointer: " << &string    << std::endl;
	std::cout << "stringPTR pointer: " << (void *)stringPTR << std::endl;
	std::cout << "stringREF pointer: " << &stringREF << std::endl; //value
	std::cout << std::endl;
	std::cout << "string value:    " << string    << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;

	return 0;
}
