//
//  main.cpp
//  cpp07_00
//
//  Created by Julia Demura on 11/12/2022.
//

#include <iostream>
#include "whatever.hpp"

//https://cplusplus.com/reference/ios/ios_base/precision/

int main(void) {
	
	std::cout.unsetf(std::ios::floatfield);
	std::cout << "Max int: " << max<int>(12, 43) << std::endl;
	std::cout << "Max float: "<< max<float>(1.16, 4.3) << std::endl;
	std::cout << "Max char: "<< max<char>('a', 'z') << std::endl;
	std::cout << std::endl;
	std::cout.unsetf(std::ios::floatfield);
	std::cout << "Min int: " << min<int>(12, 43) << std::endl;
	std::cout << "Min float: "<< min<float>(1.16, 4.3) << std::endl;
	std::cout << "Min char: "<< min<char>('a', 'z') << std::endl;
	std::cout << std::endl;
	{
		int a = 100, b = 400;
		std::cout << "ints: " << a << " and " << b << std::endl;
		swap<int>(a, b);
		std::cout << "after swap: " << a << " and " << b << std::endl;
	}
	std::cout << std::endl;
	{
		char a = 'a', b = 'e';
		std::cout << "chars: " << a << " and " << b << std::endl;
		swap<char>(a, b);
		std::cout << "fter swap: " << a << " and " << b << std::endl;
	}
	std::cout << std::endl<< "from subject "<< std::endl<< std::endl;
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
//	a = 3, b = 2
//	min(a, b) = 2
//	max(a, b) = 3
//	c = chaine2, d = chaine1
//	min(c, d) = chaine1
//	max(c, d) = chaine2
	
	return 0;
}
