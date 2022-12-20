//
//  MyStrings.cpp
//  cpp01_04
//
//  Created by Julia Demura on 17/11/2022.
//

#include "MyStrings.hpp"

//https://cplusplus.com/reference/string/string/erase/


void	MyStrings::open_files(std::string _filename){
	
	_file.open(_filename);
	if (!_file.is_open()){
		std::cerr << "file is not open, exit" << std::endl;
		exit(1);
	}
	_new_file.open(_filename.append(".replace"));
	if (!_new_file.is_open()){
		std::cerr << "file is not open, exit" << std::endl;
		exit(1);
	}
}

MyStrings::MyStrings(const char **argv) : _filename(argv[1]), _findit(argv[2]), _replace_withit(argv[3]){
	if (_filename.empty() || _findit.empty() || _replace_withit.empty()){
		std::cerr << "empty arguments, exit" << std::endl;
		exit(1);
	} else {
		open_files(_filename);
		std::cout << "Constructor: MyStrings" << std::endl;
	}
}

MyStrings::~MyStrings(){
	_file.close();
	_new_file.close();
	std::cout << "Destructor: MyStrings" << std::endl;
}

void	MyStrings::replace_in_file(){
	
	std::string line;
	std::size_t found = 0;
	for (;;) {
		
		if (!_file.good() && !_new_file.good()) {
		std::cerr << "bad file, exit" << std::endl;
		exit(1);
		}
		
		std::getline(_file, line);
		found = line.find(_findit);
		while (found != std::string::npos) {
			
			line.erase(found, _findit.length());
			line.insert(found, _replace_withit);
			found = line.find(_findit);
		}
		_new_file << line;
		if (_file.eof()) {
			break;
		}
		_new_file << std::endl;
	}
}
