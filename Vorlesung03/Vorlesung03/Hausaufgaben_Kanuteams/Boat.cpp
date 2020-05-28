#include "Boat.h"
#include "Kanuteam.h"
#include <iostream>

Boat::Boat(std::string name, Kanuteam* kanuteam)
	:IdAndName(name)
{
	m_Kanuteam = kanuteam;
}

Boat::~Boat()
{
}

void Boat::printInfos() const
{
	std::cout << "----------------" << std::endl << "Kanuteam:" << std::endl;
	IdAndName::printInfos();
	std::cout << "Team: " << m_Kanuteam->getName() << std::endl;
}

void Boat::setKanuteam(Kanuteam* kanuteam)
{
	m_Kanuteam = kanuteam;
}
