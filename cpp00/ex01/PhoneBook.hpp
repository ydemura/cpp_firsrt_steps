//
//  PhoneBook.hpp
//  cpp_xcode
//
//  Created by Julia Demura on 02/11/2022.
//

#ifndef PhoneBook_hpp
#define PhoneBook_hpp

#include "Contact.hpp"

///The cout is a predefined object of ostream class, and it is used to print the data on the standard output device. Generally, when we write a program in Linux operating system for G++ compiler, it needs “std” namespace in the program.We use it by writing using namespace std; then we can access any of the objects like cout, cin.

//https://www.geeksforgeeks.org/c-classes-and-objects/

//In your code, the phonebook must be instantiated as an instance of the PhoneBook class. Same thing for the contacts. Each one of them must be instantiated as an instance of the Contact class. You’re free to design the classes as you like but keep in mind that anything that will always be used inside a class is private, and that anything that can be used outside a class is public.


class PhoneBook{

public:
	PhoneBook(void);
	void	setContact();
	void	search();

private:
	Contact _contacts[8];
	Contact	add();
	void	printOptions();
	int		_it;
};

int phone_book(int argc, const char * argv[]);

#endif /* PhoneBook_hpp */
