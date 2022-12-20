//
//  Span.hpp
//  cpp08_01
//
//  Created by Julia Demura on 13/12/2022.
//

#ifndef Span_hpp
#define Span_hpp

#include <algorithm>
#include <iostream>
#include <list>

class Span{
	
private:
	unsigned int _capacity;
	std::list<int> _list;
public:
	
	Span(int N);
	~Span();
	Span(const Span &src);
	Span &operator=(const Span &src);
	
	
	void addNumber(int value);
	void addNNumbers(std::list<int>::iterator itBegin, std::list<int>::iterator itEnd);
	int shortestSpan() const;
	int longestSpan() const;
	
	
};

#endif /* Span_hpp */
