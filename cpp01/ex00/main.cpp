//
//  main.cpp
//  cpp_xcode
//
//  cpp01/ex00
//
//  Created by Julia Demura on 15/11/2022.
//

#include "Zombie.hpp"

int main(int argc, const char * argv[]) {
	
	std::string test_name1 = "NewZombie";
	std::string test_name2 = "ChumpZombie";
	
	Zombie *NewOne = newZombie(test_name1);
	randomChump(test_name2);
	
	delete NewOne;
	return 0;
}
