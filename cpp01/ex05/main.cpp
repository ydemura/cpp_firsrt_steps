//
//  main.cpp
//  cpp_01_05
//
//  Created by Julia Demura on 18/11/2022.
//

#include "Harl.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
	
	Harl Harly;
	
	Harly.complain("DEBUG");
	Harly.complain("WARNING");
	Harly.complain("ERROR");
	Harly.complain("INFO");
	
	Harly.complain("YELL");
	
	return 0;
}
