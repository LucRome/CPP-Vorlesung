#include "IdAndName.h"
#include <iostream>

class Boat;
class Person;
class Kanuteam;


int IdAndName::counter = 0;

IdAndName::IdAndName(std::string name)
	:m_id(counter++)
	,m_name(name)
{
}

IdAndName::~IdAndName()
{
}

int IdAndName::getId() const
{
	return m_id;
}

std::string IdAndName::getName() const
{
	return m_name;
}

void IdAndName::printInfos() const
{
	std::cout << "Name: " << m_name << std::endl;
	std::cout << "Id: " << m_id << std::endl;
}

void IdAndName::addElement(Boat* boat)
{
}

void IdAndName::addElement(Person* person)
{
}

void IdAndName::addElement(Kanuteam* kanuteam)
{
}

void IdAndName::removeElement(Boat* boat)
{
}

void IdAndName::removeElement(Person* person)
{
}

void IdAndName::removeElement(Kanuteam* kanuteam)
{
}
