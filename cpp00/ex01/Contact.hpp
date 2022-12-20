//
//  Contact.hpp
//  cpp_xcode
//
//  Created by Julia Demura on 11/11/2022.
//

#ifndef Contact_hpp
#define Contact_hpp

#include <stdio.h>
#include <string>
#include <iostream>

typedef enum {
	FIRST_NAME,
	LAST_NAME,
	NICKNAME,
	PHONE_NUMBR,
	SECRET
}	LineName;


class Contact{
	
public:
	std::string	getContactLine(LineName request);
	void		setContactLine(LineName request, std::string str);

private:
	LineName 	request;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};

#endif /* Contact_hpp */
