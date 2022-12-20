//
//  Span.cpp
//  cpp08_01
//
//  Created by Julia Demura on 13/12/2022.
//

#include "Span.hpp"

//https://cplusplus.com/reference/list/list/

//https://stackoverflow.com/questions/1303899/performance-difference-between-iterator-and-iterator

Span::Span(int N) : _capacity(N){}

Span::~Span(){}

Span::Span(const Span &src){
	*this = src;
}

Span& Span::operator=(const Span &src){
	_capacity = src._capacity;
	_list = src._list;
	return *this;
}

void Span::addNumber(int i){
	
	if (_list.size() > _capacity){
		std::cout << "overflow capacity" << std::endl;
		throw std::exception();
	} else if (_list.size() == _capacity) {
		std::cout << "max capacity" << std::endl;
		throw std::exception();
	} else {
		_list.push_back(i);
	}
}

//https://cplusplus.com/reference/list/list/insert/
void Span::addNNumbers(std::list<int>::iterator itBegin, std::list<int>::iterator itEnd){
	
	if (_list.size() > _capacity){
		std::cout << "overflow capacity" << std::endl;
		throw std::exception();
	} else if (_list.size() == _capacity) {
		std::cout << "max capacity" << std::endl;
		throw std::exception();
	} else {
		_list.insert(_list.end(), itBegin, itEnd);
	}
}

//int	findMin(std::list<int> myList){
//
//	std::list<int>::iterator it;
//	int min = INT_MAX;
//	for(it = myList.begin(); it != myList.end(); ++it){
//		if (*it < min)
//			min = *it;
//	}
//	return min;
//}

//int	findMax(std::list<int> myList){
//
//	std::list<int>::iterator it;
//	int max = INT_MIN;
//	for(it = myList.begin(); it != myList.end(); ++it){
//		if (*it > max)
//			max = *it;
//	}
//	return max;
//}

int	findShortest(std::list<int> myList){

	std::list<int>::iterator it;
	std::list<int>::iterator itSecond;
	int min_range = INT_MAX;
	
	for(it = myList.begin(); it != myList.end(); ++it){
		for(itSecond = myList.begin(); itSecond != myList.end(); ++itSecond){
			
			if (*itSecond - *it < min_range && *itSecond > *it){
				min_range = *itSecond - *it;
			}
		}
	}
	return min_range;
}

int	Span::shortestSpan(void) const{
	
	if(_list.size() < 2){
		throw std::exception();
	} else {
		return findShortest(_list);
		
	}
	return 0;
}

int	Span::longestSpan(void) const{
	
	if(_list.size() < 2){
		throw std::exception();
	} else {

		int max = *std::max_element(_list.begin(), _list.end());
		int min = *std::min_element(_list.begin(), _list.end());
		return max - min;
	}
	return 0;
}
