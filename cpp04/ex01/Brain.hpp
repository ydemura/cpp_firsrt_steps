//
//  Brain.hpp
//  cpp04_01
//
//  Created by Julia Demura on 29/11/2022.
//

#ifndef Brain_hpp
#define Brain_hpp

#include <iostream>
#include <string>

//Implement a Brain class. It contains an array of 100 std::string called ideas.
//This way, Dog and Cat will have a private Brain* attribute.
//Upon construction, Dog and Cat will create their Brain using new Brain();
//Upon destruction, Dog and Cat will delete their Brain.

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
