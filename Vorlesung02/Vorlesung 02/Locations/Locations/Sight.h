#pragma once
#include "Location.h"
#include <string>

class Sight : public Location
{
public:
	Sight(int x, int y, std::string name, std::string visible);
	void visit() override;

protected:
	const std::string m_visible;
};

