//
//  main.cpp
//  cpp07_01
//
//  Created by Julia Demura on 11/12/2022.
//

#include <iostream>
#include "Iter.hpp"

int main(void) {
	
	int array[] = {9,8,7,6,5,4,3,2,1,0};
	Iter(array, 10, &Call);
	std::cout << std::endl;
	{
		char array[] = {'a','b','c'};
		Iter(array, 3, &Call);
	}
	std::cout << std::endl;
	{
		float array[] = {1.2, 2.2, 3.3, 4.4, 5.5};
		Iter(array, 5, &Call);
	}
	return 0;
}
