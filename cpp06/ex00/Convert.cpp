//
//  Convert.cpp
//  cpp06_00
//
//  Created by Julia Demura on 07/12/2022.
//

#include "Convert.hpp"

bool strIsChar(std::string str){
	for (int i = 0; i<str.length(); i++){
		if (!isalpha(str[i]))
			return false;
	}
	return true;
}

bool strIsNum(std::string str){
	int j=0;
	if (str[j] == '-' || str[j] == '+')
		j=1;
	for (int i = j; i < str.length(); i++){
		if (!isnumber(str[i]))
			return false;
	}
	return true;
}

bool strIsNumWithDot(std::string str){
	int j=0;
	if (str[j] == '-' || str[j] == '+')
		j=1;
	for (int i = j; i<str.length(); i++){
		if (!isnumber(str[i]) && !(str[i] == '.'))
			return false;
	}
	return true;
}

bool strIsPrintable(std::string str){
	for (int i = 0; i<str.length(); i++){
		if (!isprint(str[i]))
			return false;
	}
	return true;
}

type	fl(std::string str, variables *var){
	
	if (str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0) {
		var->pseudo = str;
	} else {
		
		try {
			var->f = std::stof(str);
		} catch (std::exception &e) {
			std::cout << "impossible float, exit" << std::endl;
			exit(1);
		}
	}
	
	return FLOAT;
}

type	dbl(std::string str, variables *var){

	if (str.compare("-inf") == 0 || str.compare("+inf") == 0 || str.compare("nan") == 0){
		var->pseudo = str;
	} else {
		
		try {
			var->d = stof(str);
		} catch (std::exception &e) {
			std::cout << "impossible double, exit" << std::endl;
			exit(1);
		}
	}
	return DOUBLE;
}

type	in(std::string str, variables *var){
	
	try {
		var->i = stoi(str);
	} catch (std::exception &e) {
		std::cout << "impossible int, exit" << std::endl;
		exit(1);
	}
	return INT;
}

type	ch(std::string str, variables *var){
	try {
		var->c = str[0];
	} catch (std::exception &e) {
		std::cout << "impossible char, exit" << std::endl;
		exit(1);
	}
	return CHAR;
}

bool	checkDot(std::string str){
	int dot=0;
	for (int i = 0; i < str.length(); i++){
		if (str[i] == '.')
			dot++;
	}
	if (dot > 1)
		return false;
	return true;
}

int	convert_char(char c){
	std::cout << "char:   " << c << std::endl;
	std::cout << "int:    " << static_cast<int>(c) << std::endl;
	std::cout << "float:  " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
	return 0;
}

int	convert_int(int i){
	if (isprint(static_cast<char>(i))){
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	} else {
		std::cout << "char: not printable" << std::endl;
	}
	std::cout << "int:     " << i << std::endl;
	std::cout << "float:   " << static_cast<float>(i) << std::endl;
	std::cout << "double:  " << static_cast<double>(i) << std::endl;
	return 0;
}

int	convert_double(double d, std::string str){
	
	if (str.compare("-inf") == 0 || str.compare("+inf") == 0 || str.compare("nan") == 0) {
		std::cout << "char:   not possible to cast" << std::endl;
		std::cout << "int:    not possible to cast" << std::endl;
		std::cout << "float:  " << str << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
		
	} else {
		if (isprint(static_cast<char>(d))){
			std::cout << "char: " << static_cast<char>(d) << std::endl;
		} else {
			std::cout << "char: not printable" << std::endl;
		}
		std::cout << "int:     " << static_cast<int>(d) << std::endl;
		std::cout << "float:   " << static_cast<float>(d) << std::endl;
		std::cout << "double:  " << d << std::endl;
	}
	
	
	
	return 0;
}

int	convert_float(float f, std::string str){
	
	if (str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0) {
		std::cout << "char:   not possible to cast" << std::endl;
		std::cout << "int:    not possible to cast" << std::endl;
		std::cout << "float:  " << str << std::endl;
		std::cout << "double: ";
		for (int i = 0; i < 4; i++){
			std::cout << str[i];
		}
		std::cout << std::endl;
		
	} else {
		if (isprint(static_cast<char>(f))){
			std::cout << "char: " << static_cast<char>(f) << std::endl;
		} else {
			std::cout << "char: not printable" << std::endl;
		}
		std::cout << "int:      " << static_cast<int>(f) << std::endl;
		std::cout << "float:    " << f << std::endl;
		std::cout << "double:   " << static_cast<double>(f) << std::endl;
	}
	
	return 0;
}

type findType(std::string str, variables *var){
	
	if (strIsChar(str) && str.length() == 1){
		return ch(str, var);
	} else if (strIsNum(str)){
		return in(str, var);
	} else {
		if(!checkDot(str))
			return NONE;
		if (str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0 || (str[str.length()-1] == 'f' && str.length() > 1)){
			return fl(str,var);
		} else if (strIsNumWithDot(str) || str.compare("-inf") == 0 || str.compare("+inf") == 0 || str.compare("nan") == 0){
			return dbl(str, var);
		}
	}
	return NONE;
}

int	convert(std::string str){
	
	variables var;
	switch (findType(str, &var)) {
		case CHAR:
			return convert_char(var.c);
		case INT:
			return convert_int(var.i);
		case FLOAT:
			return convert_float(var.f, var.pseudo);
		case DOUBLE:
			return convert_double(var.d, var.pseudo);
		case NONE:
			std::cout << "wrong input" << std::endl;
			return -1;
	}
	return 0;
}
