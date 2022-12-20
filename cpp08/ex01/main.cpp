//
//  main.cpp
//  cpp08_01
//
//  Created by Julia Demura on 13/12/2022.
//

#include "Span.hpp"

int main(void) {

	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		//$> 2,14
	}
	std::cout << std::endl;
	{
		try {
			std::list<int> example(10);
			
			//example.assign(example.size(), 2);
			std::srand( static_cast<unsigned int>(time ( NULL )) );
			for(std::list<int>::iterator it = example.begin(); it != example.end(); ++it){
				*it = rand();
			}
			Span lng = Span(static_cast<int>(example.size()));
			lng.addNNumbers(example.begin(), example.end());
			std::cout << lng.shortestSpan() << std::endl;
			std::cout << lng.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << "exception cought" << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(1);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << "exception cought" << std::endl;
		}

	}
	return 0;
}
