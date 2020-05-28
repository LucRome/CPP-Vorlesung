#include "Kanuteam.h"
#include <iostream>

Kanuteam::Kanuteam(std::string name, Boat* boat)
	:IdAndName(name)
{
	m_boat = boat;
}

Kanuteam::~Kanuteam()
{
}

void Kanuteam::printInfos() const
{
	std::cout << "----------------" << std::endl << "Kanuteam: " << std::endl;
	IdAndName::printInfos();
	//Noch Boot und Mitglieder ausgeben//
}

void Kanuteam::addMember(Person* person)
{
	if (m_members.size < Kanuteam::max_Members) {
		m_members.push_back(person);
	}
	
}

void Kanuteam::addBoat(Boat* boat)
{
	m_boat = boat;
}
