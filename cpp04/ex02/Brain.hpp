//
//  Brain.hpp
//  cpp04_02
//
//  Created by Julia Demura on 29/11/2022.
//

#ifndef Brain_hpp
#define Brain_hpp

#include <iostream>
#include <string>

class Brain{
	
protected:
	std::string _ideas[100];
	
public:
	Brain();
	~Brain();
	Brain(const Brain &src);
	Brain& operator=(const Brain &src);
};

#endif /* Brain_hpp */
