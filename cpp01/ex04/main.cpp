//
//  main.cpp
//  cpp01_04
//
//  Created by Julia Demura on 17/11/2022.
//

#include "MyStrings.hpp"

//https://cplusplus.com/doc/tutorial/files/


void test1(const char *filename){
	
	std::ofstream created_file;
	created_file.open(filename);
	if (created_file.is_open()) {

		created_file << "Hello dear test" << std::endl << "Let me write here something" << std::endl;
		created_file << "We will replace something" << std::endl << "like |I WILL BE PERLACED|" << std::endl;
		created_file << "|I WILL BE PERLACED|" << " and again |I WILL BE PERLACED|" << std::endl;
		created_file << " or perhaps : | | |I WILL BE PERLACED| | | " << " I WILL ya know WILL I |I WILL BE PERLACED|" << std::endl;
		created_file << "nope nothing here exept REPLACED" << " |I WILL BE PERLACED| for sure ofc u will" << std::endl;
		created_file << std::endl;
		
	} else {
		std::cerr << "oops test open fails, exit" << std::endl;
		exit(1);
	}
	created_file.close();
	
	const char *argv[5];
	argv[0] = "./name";
	argv[1] = filename;
	argv[2] = "|I WILL BE PERLACED|";
	argv[3] = ">>>replacement<<<";
	argv[4] = NULL;
	
	MyStrings Strings(argv);
	Strings.replace_in_file();
	
}

void	test_empty_file(const char *filename){
	std::ofstream created_file;
	created_file.open(filename);
	if (!created_file.is_open()) {
		std::cerr << "oops test open fails, exit" << std::endl;
		exit(1);
	} else {
		created_file.close();
	}
	
	const char *argv[5];
	argv[0] = "./name";
	argv[1] = filename;
	argv[2] = "doesnt mattter";
	argv[3] = "nevermind";
	argv[4] = NULL;
	
	MyStrings Strings(argv);
	Strings.replace_in_file();
}

void	test_dont_exist_file(const char *filename){

	const char *argv[5];
	argv[0] = "./name";
	argv[1] = filename;
	argv[2] = "doesnt mattter";
	argv[3] = "nevermind";
	argv[4] = NULL;
	
	MyStrings Strings(argv);
	Strings.replace_in_file();
}


int main(int argc, const char * argv[]) {

	test1("TEST");
	std::cout << "test 1 performed, check file TEST" << std::endl << std::endl;
	
	test_empty_file("EMPTY_TEST");
	std::cout << "test empty performed, check file EMPTY_TEST" << std::endl << std::endl;
	
	
	std::cout << "test not existed file, it will exit: " << std::endl;
	test_dont_exist_file("I do not exist ya know");
	
	return 0;
}




//const char *filename = "/Users/yuliia/Codam/cpp_wf/cpp01/ex04/TEST1";
////const char *filename = "~/ex04/TEST1";
//test1(filename);
//std::cout << "test 1 performed, check file TEST1" << std::endl << std::endl;
//
//test_empty_file("/Users/yuliia/Codam/cpp_wf/cpp01/ex04/EMPTY_TEST");
//std::cout << "test empty performed, check file EMPTY_TEST" << std::endl << std::endl;
//
//
//std::cout << "test not existed file, it will exit" << std::endl << std::endl;
//test_dont_exist_file("I do not exist ya know");
