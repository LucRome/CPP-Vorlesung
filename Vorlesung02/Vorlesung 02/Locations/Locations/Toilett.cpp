#include "Toilett.h"
#include <iostream>

Toilett::Toilett(int x, int y, std::string name, std::string smell)
	: Location(x, y, name)
	, m_smell(smell)
{
}

void Toilett::visit()
{
	std::cout << "Toilett: [" << m_x << "," << m_y << "], " << m_name << ", smells like " << m_smell << std::endl;
}
