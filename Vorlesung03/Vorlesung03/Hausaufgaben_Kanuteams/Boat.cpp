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
	if (!is_KanuteamSet() && !kanuteam->is_boatSet()) {
		m_Kanuteam = kanuteam;
	}
	else {

	}
}

bool Boat::is_KanuteamSet()
{
	return m_Kanuteam;
}
