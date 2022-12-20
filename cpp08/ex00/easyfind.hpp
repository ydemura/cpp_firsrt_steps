//
//  easyfind.hpp
//  cpp08_00
//
//  Created by Julia Demura on 13/12/2022.
//

#ifndef easyfind_hpp
#define easyfind_hpp

#include <iostream>
#include <algorithm>
//https://cplusplus.com/reference/algorithm/find/


template <typename T>
typename T::iterator easyfind(T &arr, int needle){
	
	typename T::iterator it = std::find(arr.begin(), arr.end(), needle);
	
	if (it == arr.end()){
		throw std::exception();
		return arr.end();
	}
		
	else
		return it;
};


#endif /* easyfind_hpp */
