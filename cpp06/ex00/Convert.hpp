//
//  Convert.hpp
//  cpp06_00
//
//  Created by Julia Demura on 07/12/2022.
//

#ifndef Convert_hpp
#define Convert_hpp

#include <iostream>
#include <string>

typedef enum{
	CHAR = 0,
	INT = 1,
	FLOAT = 2,
	DOUBLE = 3,
	NONE = -1
} type;

typedef struct{
	char c;
	int i;
	double d;
	float f;
	std::string pseudo;
} variables;

int	convert(std::string str);

#endif /* Convert_hpp */
