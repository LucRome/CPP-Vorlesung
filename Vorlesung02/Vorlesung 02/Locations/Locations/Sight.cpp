#include "Sight.h"
#include <iostream>

Sight::Sight(int x, int y, std::string name, std::string visible)
	:Location(x, y, name)
	,m_visible(visible)
{
}

void Sight::visit()
{
	std::cout << "Sight: [" << m_x << "," << m_y << "], " << m_name << ", you can see " << m_visible <<std::endl;
}
