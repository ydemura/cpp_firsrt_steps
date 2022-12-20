//
//  main.cpp
//  cpp06_02
//
//  Created by Julia Demura on 07/12/2022.
//

#include "Base.hpp"

//https://en.cppreference.com/w/cpp/language/dynamic_cast
//https://www.bogotobogo.com/cplusplus/dynamic_cast.php



//In general, the expression:
//dynamic_cast<Type *>(ptr)

//converts the pointer ptr to a pointer of type Type* if the pointer-to object (*ptr) is of type Type or else derived directly or indirectly from type Type. Otherwise, the expression evaluates to 0, the null pointer.

int main(int argc, const char * argv[]) {
	
//	Base *base = new Base;
	
	
	for (int i = 0; i < 10; i++){
		
		Base *one = generate();
		identify(one);
		identify(*one);
		delete one;
		std::cout << std::endl;
	}
	return 0;
}
