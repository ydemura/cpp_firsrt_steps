//
//  main.cpp
//  cpp08_01
//
//  Created by Julia Demura on 13/12/2022.
//


#include "easyfind.hpp"
#include <list>

//https://www.geeksforgeeks.org/containers-cpp-stl/

//https://www.geeksforgeeks.org/the-c-standard-template-library-stl/


//https://cplusplus.com/reference/stl/
int main(void) {
	
	std::list<int> test_list;
	test_list.assign(7, 1);
	try {
		easyfind(test_list, 5);
	} catch (std::exception &e) {
		std::cout << "issue here" << std::endl;
	}
	test_list.push_front(5);
	try {
		std::cout << "found: " << *easyfind(test_list, 5) << std::endl;
	} catch (std::exception &e) {
		std::cout << "issue here" << std::endl;
	}
	return 0;
}
