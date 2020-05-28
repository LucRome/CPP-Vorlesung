#pragma once
#include "IdAndName.h"
#include <vector>

class Boat;
class Person;


class Kanuteam :
	public IdAndName
{
public:
	Kanuteam(std::string name, Boat* boat);
	~Kanuteam() override;
	void printInfos()  const override;
	void addMember(Person* person); //mit alias?


protected:
	Boat* const m_boat;
	std::vector<Person*> m_members;

private:
	static const int max_Members;
};

