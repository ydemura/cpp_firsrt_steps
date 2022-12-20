//
//  PhoneBook.cpp
//  cpp_xcode
//
//  Created by Julia Demura on 04/11/2022.


#include "PhoneBook.hpp"
//On program start-up, the phonebook is empty and the user is prompted
//to enter one of three commands.
//The program only accepts ADD, SEARCH and EXIT.



int phone_book(int argc, const char * argv[]) {

	PhoneBook notebook;
	std::string answer;
	
	std::cout << std::endl;
	for (int i = 0;; i++) {

		std::cout << "What should we do? Pick ADD, SEARCH or EXIT: ";
		std::getline(std::cin, answer);
		if (std::cin.eof()) {
			std::cout << "eof, exit" << std::endl;
			return 0;
		} else if (answer.empty()) {
			std::cout << "empty wont work" << std::endl;
		} else if (answer.compare("ADD") == 0) {
			notebook.setContact();
		} else if (answer.compare("SEARCH") == 0) {
			if (i == 0) {
				std::cout << "there is nothing in a notebook" << std::endl;
			} else {
				notebook.search();
			}
		} else if (answer.compare("EXIT") == 0) {
			std::cout << "all things come to its end, buy" << std::endl;
			return 0;
		} else {
			std::cout << "wrong command" << std::endl;
		}
	}
	return 0;
}


//int main(int argc, const char * argv[]) {
//
//	phone_book(argc, argv);
//	return 0;
//}










//old

//int phone_book(int argc, const char * argv[]) {
//
//	PhoneBook notebook;
//	std::string answer;
//	notebook.it = 0;
//	std::cout << std::endl;
//	for (int i = 0; i >= 0; i++){
//
//		std::cout << "What should we do? Pick ADD, SEARCH or EXIT: ";
//		std::getline(std::cin, answer);
//		if (std::cin.eof()){
//			std::cout << "eof, exit" << std::endl; exit(0);
//		}
//		else if (answer.empty()){
//			std::cout << "empty wont work" << std::endl;
//		}
//		else if (answer.compare("ADD") == 0){
//			notebook.contacts[notebook.it % 8] = notebook.add();
//			notebook.it++;
//		}
//		else if (answer.compare("SEARCH") == 0){
//			notebook.print_contc_list(notebook.contacts, notebook.it);
//			notebook.search(notebook.contacts, notebook.it);
//		}
//		else if (answer.compare("EXIT") == 0){
//			std::cout << "all things come to its end, buy" << std::endl; exit(0);
//		}
//		else{
//			std::cout << "wrong command" << std::endl;
//		}
//	}
//	return 0;
//}

//int main(int argc, const char * argv[]) {
//
//	phone_book(argc, argv);
//	return 0;
//}
