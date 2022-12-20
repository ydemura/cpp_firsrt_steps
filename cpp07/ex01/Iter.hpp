//
//  Iter.hpp
//  cpp07_01
//
//  Created by Julia Demura on 11/12/2022.
//

#ifndef Iter_hpp
#define Iter_hpp

#include <iostream>

template<typename T>
void	Iter(T *array, size_t lenght, void (*call_ptr)(T &)){
	
	for (int i = 0; i < lenght; i++){
		call_ptr(array[i]);
	}
	
}

template<typename T>
void	Call(T &var){
	std::cout << "call : " << var << std::endl;
}

//Implement a function template iter that takes 3 parameters and returns nothing.
//• The first parameter is the address of an array.
//• The second one is the length of the array.
//• The third one is a function that will be call on every element of the array.
//Turn in a main.cpp file that contains your tests. Provide enough code to generate a test executable.
//Your iter function template must work with any type of array. The third parameter can be an instantiated function template.

#endif /* Iter_hpp */
