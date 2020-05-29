#include "Kanuteam.h"
#include "Boat.h"
#include "Person.h"
#include <iostream>

const int Kanuteam::max_Members = 5;

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

/*void Kanuteam::setMembers(std::vector<Person*> members)
{
	if (members.size <= max_Members) {
		m_members = members;
	}
	else {
		std::cout << "Zu viele Mitglieder" << std::endl;
	}
}*/

void Kanuteam::addMember(Person* person)
{
	if (is_moreMembersPossible() && person->is_moreKanuteamsPossible()) {
		m_members.push_back(person);
		person->addKanuteam_noTest(this);
	}
	else {
		std::cout << "Already enough members or Person already has enough teams" << std::endl;
	}
}

void Kanuteam::setBoat(Boat* boat)
{
	if (!is_boatSet() && !boat->is_KanuteamSet()) {
		m_boat = boat;
		boat->setKanuteam_noTest(this);
	}
	else {
		std::cout << "Error: Boat already has a Team or Team already has a boat" << std::endl;
	}
}

void Kanuteam::addMember_noTest(Person* person)
{
	m_members.push_back(person);
}

void Kanuteam::setBoat_noTest(Boat* boat)
{
	m_boat = boat;
}

bool Kanuteam::is_moreMembersPossible() const
{
	return (m_members.size < max_Members);
}

bool Kanuteam::is_boatSet() const
{
	bool ibs;
	m_boat == nullptr ? ibs = false : ibs = true;
	return ibs;
}
