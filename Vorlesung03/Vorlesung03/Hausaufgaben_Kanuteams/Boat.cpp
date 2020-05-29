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
	if (m_Kanuteam) {
		m_Kanuteam->removeBoat();
	}
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
		kanuteam->setBoat_noTest(this);
	}
	else {
		std::cout << "Kanuteam hat ein Boot oder Boot hat ein Kanuteam" << std::endl;
	}
}

void Boat::setKanuteam_noTest(Kanuteam* kanuteam)
{
	m_Kanuteam = kanuteam;
}

void Boat::removeKanuteam()
{
	m_Kanuteam = nullptr;
}

bool Boat::is_KanuteamSet()
{
	return m_Kanuteam;
}
