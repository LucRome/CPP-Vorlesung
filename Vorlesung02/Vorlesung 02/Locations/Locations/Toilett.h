#pragma once
#include "Location.h"
#include <string>

class Toilett :	public Location
{
public:
	Toilett(int x, int y, std::string name, std::string smell);
	void visit() override;

protected:
	const std::string m_smell;
};

