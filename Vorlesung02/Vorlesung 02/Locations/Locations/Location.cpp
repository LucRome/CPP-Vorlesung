#include "Location.h"
#include <iostream>

Location::Location(int x, int y, std::string name)
	: m_x(x)
	, m_y(y)
	, m_name(name)
{
}

void Location::visit()
{
	std::cout << "Location: [" << m_x << "," << m_y << "], " << m_name << std::endl;
}
