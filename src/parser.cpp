#include <string>

#include "parser.h"

#include <iostream>

namespace StringUtils{
	void parseName(const std::string &fullName, std::string *firstName, std::string *lastName){
		long firstIdx = fullName.find(" ");
		long lastIdx = fullName.rfind(" ") + 1;
		
		*firstName = fullName.substr(0, firstIdx);
		*lastName = fullName.substr(lastIdx, fullName.length() - 1);
	}

	std::string getUsername(const std::string &email){
		long atIdx = email.find("@");

		std::string result = email.substr(0, atIdx);

		return result;
	}
}
