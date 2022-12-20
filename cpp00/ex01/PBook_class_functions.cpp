//
//  PBook_class_functions.cpp
//  cpp_xcode
//
//  Created by Julia Demura on 07/11/2022.
//

#include "PhoneBook.hpp"
#include <iomanip>
#include <algorithm>

PhoneBook::PhoneBook(void): _it(0) {}

std::string	answer(const char *message){ std::string str;

	for (;;) {
		std::cout << message << ": ";
		std::getline(std::cin, str);
		if (std::cin.eof()) {
			std::cout << "eof, exit" << std::endl;
			exit(0);
		}
		if (str.empty()) {
			std::cout << "empty line, try again" << std::endl;
		} else {
			return str;
		}
	}
	return str;
}

Contact	PhoneBook::add() { Contact current;

	std::cout << "Lets collect details" << std::endl;
	current.setContactLine(FIRST_NAME, answer("first name"));
	current.setContactLine(LAST_NAME, answer("last name"));
	current.setContactLine(NICKNAME, answer("nickname"));
	current.setContactLine(PHONE_NUMBR, answer("phone number"));
	current.setContactLine(SECRET, answer("darkest secret"));
	std::cout << "NOTED" << std::endl;
	std::cout << "-----" << std::endl;
	std::cout << std::endl;
	return current;
}

void	PhoneBook::setContact(){
	
	_contacts[_it % 8] = add();
	_it++;
}

void organize_str_for_print(std::string str){
	if (str.length() <= 10) {
		std::cout << std::right << std::setw(10) << str << "|";
	} else {
		for (int it = 0; it < 9; it++) {
			std::cout << str[it];
		}
		std::cout << "." << "|";
	}
}

void PhoneBook::printOptions(){
	int index = _it;
	if (index >= 8)
		index = 8;

	std::cout << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "FirstName" << "|";
	std::cout << std::right << std::setw(10) << "LastName" << "|";
	std::cout << std::right << std::setw(10) << "NickName" << "|";
	std::cout << std::endl << std::endl;

	for (int i = 0; i < index; i++){
		std::cout << std::right << std::setw(10) << i << "|";
		organize_str_for_print(_contacts[i].getContactLine(FIRST_NAME));
		organize_str_for_print(_contacts[i].getContactLine(LAST_NAME));
		organize_str_for_print(_contacts[i].getContactLine(NICKNAME));
		std::cout << std::endl;
	}
}


void print_found_contact(Contact current){

	std::cout << std::endl <<  "---------------------------------------------" << std::endl;
	std::cout << "CONTACT" << std::endl;
	std::cout << "first name:      " << current.getContactLine(FIRST_NAME) << std::endl;
	std::cout << "last name:       " << current.getContactLine(LAST_NAME) << std::endl;
	std::cout << "nickname:        " << current.getContactLine(NICKNAME) << std::endl;
	std::cout << "phone number:    " << current.getContactLine(PHONE_NUMBR) << std::endl;
	std::cout << "darkest secret..." << std::endl << "between us its creepy to collect such data but here we are: "<< std::endl;
	std::cout << "                 " << current.getContactLine(SECRET) << std::endl;
	std::cout << std::endl <<  "---------------------------------------------" << std::endl;
}

bool is_digit(const std::string str){
	std::string::const_iterator it = str.begin();
	while (it != str.end() && std::isdigit(*it)){
		it++;
	}
	return !str.empty() && it == str.end();
}

void PhoneBook::search(){ std::string answer;

	int pick_i;
	int index = std::min(_it, 8);
	printOptions();
	std::cout << "pick index from the list: ";
	pick_i = 0;
	for (;;) {
		std::getline(std::cin, answer);
		if (std::cin.eof()) {
			std::cout << "eof, exit" << std::endl; exit(0);
		} else if (answer.empty()) {
			std::cout << "empty wont do, try again: ";
		} else if (is_digit(answer) == false) {
			std::cout << "not digits wont do, try again: ";
		} else {
			pick_i = stoi(answer);
			if (pick_i < 0 || pick_i > index - 1) {
				std::cout << "wrong index, try again: ";
			} else {
				break;
			}
		}
	}
	print_found_contact(_contacts[pick_i]);
}



