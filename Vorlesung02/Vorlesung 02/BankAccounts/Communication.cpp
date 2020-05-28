#include "Communication.h"
#include <iostream>

int Communication::askUser(std::string varName)
{
	int input;
	std::cout << varName << ": ";
	std::cin >> input;
	std::cout << std::endl;
	return input;
}
