//
//  Base.hpp
//  cpp06_02
//
//  Created by Julia Demura on 07/12/2022.
//

#ifndef Base_hpp
#define Base_hpp

#include <string>
#include <iostream>

class Base{
public:
	virtual ~Base(){
		std::cout << "Deastructor : Base" << std::endl; };
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif /* Base_hpp */
