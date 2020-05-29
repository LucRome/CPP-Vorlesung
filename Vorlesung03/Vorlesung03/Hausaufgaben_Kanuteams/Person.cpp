#include "Person.h"
#include <iostream>


const int Person::max_Kanuteams = 3;

Person::Person(std::string name)
	:IdAndName(name)
{
}

Person::~Person()
{
}

void Person::printInfos()
{
	std::cout << "----------------" << std::endl << "Person: " << std::endl;
	IdAndName::printInfos();
	std::cout << "Teams: " << std::endl;
	for (Kanuteam* kanuteam : m_kanuteams) {
		std::cout << kanuteam->getName() << std::endl;
	}
}

void Person::addKanuteam(Kanuteam* kanuteam)
{
	if (is_moreKanuteamsPossible() && kanuteam->is_moreMembersPossible()) {
		m_kanuteams.push_back(kanuteam);
		kanuteam->addMember_noTest(this);
	}
	else {
		std::cout << "Zu viele Teams oder Team hat genug Member" << std::endl;
	}
}

void Person::addKanuteam_noTest(Kanuteam* kanuteam)
{
	m_kanuteams.push_back(kanuteam);
}

bool Person::is_moreKanuteamsPossible() const
{
	return (m_kanuteams.size() < max_Kanuteams);
}
