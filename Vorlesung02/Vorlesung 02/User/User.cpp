#include "User.h"
#include <iostream>

int User::m_userCounter = 0;

User::User(std::string name)
	:m_name(name)
{
	m_id = (m_userCounter++);
}

void User::print()
{
	std::cout << m_name << " [ID: " << m_id << "]" << std::endl;
}
