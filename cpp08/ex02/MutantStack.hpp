//
//  MutantStack.hpp
//  cpp08_02
//
//  Created by Julia Demura on 14/12/2022.
//

#ifndef MutantStack_hpp
#define MutantStack_hpp

#include <iostream>
#include <algorithm>
#include <stack>

//https://en.cppreference.com/w/cpp/container/stack

//https://en.cppreference.com/w/cpp/container/deque
//iterator	LegacyRandomAccessIterator to value_type
//const_iterator	LegacyRandomAccessIterator to const value_type
//reverse_iterator	std::reverse_iterator<iterator>
//const_reverse_iterator	std::reverse_iterator<const_iterator>

template <typename T>
class MutantStack : public std::stack<T>{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::iterator const citerator;
	typedef typename std::stack<T>::container_type::reverse_iterator riterator;
	typedef typename std::stack<T>::container_type::reverse_iterator const rciterator;
	
	MutantStack(){}
	~MutantStack(){}
	
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
	
	MutantStack(const MutantStack &src) { *this = src; }
	MutantStack& operator=(const MutantStack &src){ *this = src; return *this;}
	
	
};

#endif /* MutantStack_hpp */
