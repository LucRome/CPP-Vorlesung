#pragma once

#include <string>

class Location
{
public:
	Location(int x, int y, std::string name);
	virtual void visit();

protected:
	const int m_x, m_y;
	const std::string m_name;
};

