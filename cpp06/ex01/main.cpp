//
//  main.cpp
//  cpp06_01
//
//  Created by Julia Demura on 07/12/2022.
//

#include <iostream>

//https://en.cppreference.com/w/cpp/language/reinterpret_cast
//Use serialize() on the address of the Data object and pass its return value to deserialize().
//Then, ensure the return value of deserialize() compares equal to the original pointer.

//uintptr_t is "an unsigned integer type with the property that any valid pointer to void can be converted to this type, then converted back to pointer to void, and the result will compare equal to the original pointer".
typedef struct {
	
	int object;
	
}Data;


Data* deserialize(uintptr_t raw){
	//It takes an unsigned integer parameter and converts it to a pointer to Data.
	return (reinterpret_cast<Data*> (raw) );
}

uintptr_t serialize(Data* ptr){
	//It takes a pointer and converts it to the unsigned integer type uintptr_t.
	return (reinterpret_cast<uintptr_t> (ptr) );
}

int main(int argc, const char * argv[]) {
	
	Data *Test = new Data;
	Data *comparison;

	Test->object = 9999;
	comparison = deserialize( serialize( Test ) );
	std::cout << comparison << std::endl << Test << std::endl;
	delete Test;

	return 0;
}
