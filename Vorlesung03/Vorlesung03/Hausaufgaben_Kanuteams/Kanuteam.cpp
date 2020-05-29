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
	if (m_boat) {
		m_boat->removeKanuteam();
	}
	for (Person* p : m_members) {
		p->removeKanuteam(this);
	}
}

void Kanuteam::printInfos() const
{
	std::cout << "----------------" << std::endl << "Kanuteam: " << std::endl;
	IdAndName::printInfos();
	if (m_boat) {
		std::cout << "Kanu: " << m_boat->getName() << std::endl;
	}
	std::cout << "Members: " << std::endl;
	for(Person * const person : m_members) {
		std::cout << person->getName() << std::endl;
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

void Kanuteam::removeMember(Person* person)
{
	for (int i = 0; i < m_members.size(); i++) {
		if (m_members[i] == person) {
			m_members.erase(m_members.begin()+i);
			break;
		}
	}
}

void Kanuteam::setBoat_noTest(Boat* boat)
{
	m_boat = boat;
}

void Kanuteam::removeBoat()
{
	m_boat = nullptr;
}

bool Kanuteam::is_moreMembersPossible() const
{
	return (m_members.size() < max_Members);
}

bool Kanuteam::is_boatSet() const
{
	bool ibs;
	m_boat == nullptr ? ibs = false : ibs = true;
	return ibs;
}
