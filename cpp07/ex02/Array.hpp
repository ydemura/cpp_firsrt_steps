//
//  Array.hpp
//  cpp07_02
//
//  Created by Julia Demura on 11/12/2022.
//

#ifndef Array_hpp
#define Array_hpp

#include <iostream>

template <typename T>

class Array{
private:
	T* _array;
	unsigned int _len;
public:
	Array(void) : _array(new T), _len(0) {}
	~Array(){ delete [] _array; }
	Array(unsigned int n) : _array(new T[n]), _len(n) {}
	
	Array(const Array &src) : _array(new T[src._len]), _len(src._len) {
		for (int i = 0; i < src._len; i++){
			_array[i] = src._array[i];
		}
	}
	
	Array& operator=(const Array &src){
		if (_array)
			delete [] _array;
		_len = src._len;
		_array = new T[src._len];
		for (int i = 0; i < src._len; i++){
			_array[i] = src._array[i];
		}
		return *this;
	}
	
	T& operator[](unsigned int n){
		if (n > _len){
			throw std::exception();
		}
		return _array[n];
	}
	
	unsigned int size() const { return _len; }
	
};

#endif /* Array_hpp */
