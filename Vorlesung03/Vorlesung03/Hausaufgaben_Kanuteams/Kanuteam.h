#pragma once
#include "IdAndName.h"
#include <vector>

class Boat;
class Person;


class Kanuteam :
	public IdAndName
{
public:
	Kanuteam(std::string name, Boat* boat = nullptr);
	~Kanuteam() override;
	void printInfos()  const override;
	void setMembers(std::vector<Person*>);
	void addMember(Person* person); //mit alias?
	void addBoat(Boat* boat);


protected:
	Boat* m_boat;
	std::vector<Person*> m_members;

private:
	static const int max_Members;
};

