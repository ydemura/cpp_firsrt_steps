//
//  whatever.hpp
//  cpp_xcode
//
//  Created by Julia Demura on 11/12/2022.
//

#ifndef whatever_hpp
#define whatever_hpp

#include <iostream>
#include <string>

template<typename T>
T const &max(T const &x, T const &y){
	return (x > y ? x : y);
}

template<typename T>
T const &min(T const &x, T const &y){
	return (x < y ? x : y);
}

template<typename T>
void	swap(T &a, T &b){
	
	T c_temp;
	c_temp = a;
	a = b;
	b = c_temp;
}

#endif /* whatever_hpp */
