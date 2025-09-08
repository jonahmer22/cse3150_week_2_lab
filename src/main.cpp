#include <iostream>
#include <string>

#include "parser.h"

int main(){
	// declare vairables
	std::string *firstName = new std::string;
	std::string *lastName = new std::string;

	std::string fullName;
	std::string email;

	// get user input
	std::cout << "Please enter your full name: ";
	std::getline(std::cin, fullName);

	std::cout << std::endl << "Please enter your email address: ";
	std::cin >> email;
	std::cout << std::endl;

	// call funcitons
	StringUtils::parseName(fullName, firstName, lastName);
	std::string uName = StringUtils::getUsername(email);

	// print outputs
	std::cout << "First Name: " << *firstName << std::endl << "Last Name: " << *lastName << std::endl << "Username: " << uName << std::endl;

	// cleanup
	delete firstName;	
	delete lastName;

	return 0;
}
