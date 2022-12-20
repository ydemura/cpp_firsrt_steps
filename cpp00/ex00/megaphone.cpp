//
//  megaphone.cpp
//  cpp_xcode
//
//  Created by Julia Demura on 02/11/2022.
//

//theory:
///std::cout<<“Hello World”;:  This line tells the compiler to display the message “Hello World” on the screen. This line is called a statement in C++. Every statement is meant to perform some task. A semi-colon ‘;’ is used to end a statement. Semi-colon character at the end of the statement is used to indicate that the statement is ending there. The std::cout is used to identify the standard character output device which is usually the desktop screen. Everything followed by the character “<<” is displayed to the output device.
///Note: 	cout << “\n” looks performance wise better but in real cout << endl is much better in C++; As it doesn’t occupies any memory and also if flushing of stream is required.

//expected behaviour:

//$>./megaphone "shhhhh... I think the students are asleep..."
//SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
//$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
//DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
//$>./megaphone
//* LOUD AND UNBEARABLE FEEDBACK NOISE *

#include <iostream>
#include <string>

char *	volume_up(char *str){
	if (!str)
		return NULL;
	for (int i = 0; i < strlen(str); i++){
		str[i] = std::toupper(str[i]);
	}
	return str;
}

int megaphone (int argc, const char * argv[]) {
	
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	for (int i = 1; i < argc; i++){
		std::cout << volume_up((char *)argv[i]);
//		if (i < argc - 1)
//			std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}

//int main(int argc, const char * argv[]) {
//
//	megaphone(argc, argv);
//	return 0;
//}
