//
//  main.cpp
//  cpp07_02
//
//  Created by Julia Demura on 11/12/2022.
//

#include "Array.hpp"

//https://en.cppreference.com/w/cpp/language/class_template

int main(void) {

	
	
	{
		Array<int> first(5);
		std::cout << "size : " << first.size() << std::endl;
	}
	std::cout << std::endl;
	{
		Array<int> wrong(9);
		try {
			wrong[15];
		} catch (std::exception &e) {
			std::cout << "cought too big" << std::endl;
		}
		try {
			wrong[5];
		} catch (std::exception &e) {
			std::cout << "cought too big" << std::endl;
		}
		std::cout << "5 is ok" << std::endl;
	}
	std::cout << std::endl;
	{
		Array<float> second(20);
		std::cout << second.size() << std::endl;
		for (int i = 0; i < second.size(); i++){
			second[i] = 0;
		}
		for (int i = 0; i < second.size(); i++){
			std::cout << second[i];
			second[i] =  3.33 * i;
			std::cout << second[i] << std::endl;
		}
		
	}
	
	return 0;
}
