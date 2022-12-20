//
//  Contact.cpp
//  cpp_xcode
//
//  Created by Julia Demura on 11/11/2022.
//

#include "Contact.hpp"

std::string	Contact::getContactLine(LineName request) {
	
	switch (request) {
		case FIRST_NAME:
			return _first_name;
		case LAST_NAME:
			return _last_name;
		case NICKNAME:
			return _nickname;
		case PHONE_NUMBR:
			return _phone_number;
		case SECRET:
			return _darkest_secret;
		default:
			return std::string();
	}
}

void	Contact::setContactLine(LineName request, std::string str){
	
	switch (request) {
		case FIRST_NAME:
			_first_name = str;
			break;
		case LAST_NAME:
			_last_name = str;
			break;
		case NICKNAME:
			_nickname = str;
			break;
		case PHONE_NUMBR:
			_phone_number = str;
			break;
		case SECRET:
			_darkest_secret = str;
			break;
		default:
			break;
	}
}
