#include "Kanuteam.h"
#include "Boat.h"
#include "Person.h"
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
	if (m_boat) {
		std::cout << "Kanu: " << m_boat->getName << std::endl;
	}
	std::cout << "Members: " << std::endl;
	for(Person * const person : m_members) {
		std::cout << person->getName();
	}
}

void Kanuteam::setMembers(std::vector<Person*> members)
{
	if (members.size <= max_Members) {
		m_members = members;
	}
	else {
		std::cout << "Zu viele Mitglieder" << std::endl;
	}
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
