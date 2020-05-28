#include "IdAndName.h"
#include <iostream>


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
