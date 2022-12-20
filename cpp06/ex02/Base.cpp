//
//  Base.cpp
//  cpp06_02
//
//  Created by Julia Demura on 07/12/2022.
//

#include "Base.hpp"

//It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
//to use anything you like for the random choice implementation.
Base * generate(void){
	
	int random = rand() % 3;
	
	if (random % 3 == 0){
		std::cout << "Im A" << std::endl;
		return new A;
	} else if (random % 3 == 1){
		std::cout << "Im B" << std::endl;
		return new B;
	} else {
		std::cout << "Im C" << std::endl;
		return new C; }

	
}


//Unlike other casts, a dynamic_cast involves a run-time type check. If the object bound to the pointer is not an object of the target type, it fails and the value is 0. If it's a reference type when it fails, then an exception of type bad_cast is thrown. So, if we want dynamic_cast to throw an exception (bad_cast) instead of returning 0, cast to a reference instead of to a pointer. Note also that the dynamic_cast is the only cast that relies on run-time checking.



//It prints the actual type of the object pointed to by p: "A", "B" or "C".
void identify(Base* p){
	
	if (dynamic_cast<A *>(p))
		std::cout << "A found" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B found" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C found" << std::endl;
}

//It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
//inside this function is forbidden.
void identify(Base& p){
	try {
		A &classA = dynamic_cast<A&>(p);
		std::cout << "A & found" << std::endl;
	} catch (std::exception &e) {}
	try {
		B &classB = dynamic_cast<B&>(p);
		std::cout << "B & found" << std::endl;
	} catch (std::exception &e) {}
	try {
		C &classC = dynamic_cast<C&>(p);
		std::cout << "C & found" << std::endl;
	} catch (std::exception &e) {}
}


