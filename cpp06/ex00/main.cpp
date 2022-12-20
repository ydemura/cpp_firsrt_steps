//
//  main.cpp
//  cpp06_00
//
//  Created by Julia Demura on 06/12/2022.
//

#include <iostream>
#include <string>
#include "Convert.hpp"


int main(int argc, const char * argv[]) {
	
	if (argc != 2){
		std::cout << "wrong number args" << std::endl;
		return 1;
	} else {
		if (argv[1][0] == '\0'){
			std::cout << "empty input" << std::endl;
			return 1;
		} else if (convert(argv[1]) < 0){
			return 1;
		}
	}
//	{
//		std::cout <<std::endl<< "TESTS chars" <<std::endl;
//		std::cout << "---------------" <<std::endl;
//		convert("a");
//		std::cout << "---------------" <<std::endl;
//		convert("abc");
//		std::cout << "---------------" <<std::endl;
//		convert("-abd");
//		std::cout << "---------------" <<std::endl;
//		convert("+aaa");
//	}
//	{
//		std::cout <<std::endl<< "TESTS ints" <<std::endl;
//		std::cout << "---------------" <<std::endl;
//		convert("123");
//		std::cout << "---------------" <<std::endl;
//		convert("12-3");
//		std::cout << "---------------" <<std::endl;
//		convert("123-");
//		std::cout << "---------------" <<std::endl;
//		convert("156999999999999999999999999999999999");
//	}
//	{
//		std::cout <<std::endl<< "TESTS floats" <<std::endl;
//		std::cout << "---------------" <<std::endl;
//		convert("0.111111111f111");
//		std::cout << "---------------" <<std::endl;
//		convert("189..5f");
//		std::cout << "---------------" <<std::endl;
//		convert("45.6789.9f");
//		std::cout << "---------------" <<std::endl;
//		convert("121.8f");
//	}
//	{
//		std::cout <<std::endl<< "TESTS double" <<std::endl;
//		std::cout << "---------------" <<std::endl;
//		convert("0.1");
//		std::cout << "---------------" <<std::endl;
//		convert("189..5");
//		std::cout << "---------------" <<std::endl;
//		convert("45.fad6");
//		std::cout << "---------------" <<std::endl;
//		convert("35.8");
//	}
	
	return 0;
}
