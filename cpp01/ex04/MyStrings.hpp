//
//  MyStrings.hpp
//  cpp01_04
//
//  Created by Julia Demura on 17/11/2022.
//

#ifndef MyStrings_hpp
#define MyStrings_hpp

#include <iostream>
#include <string>
#include <fstream>

class MyStrings{

public:
	MyStrings(const char **argv);
	~MyStrings();
	
	void	replace_in_file();
	
private:
	std::string const _filename;
	std::string const _findit;
	std::string const _replace_withit;
	
	std::ifstream _file;
	std::ofstream _new_file;
	void	open_files(std::string _filename);
};

#endif /* MyStrings_hpp */
