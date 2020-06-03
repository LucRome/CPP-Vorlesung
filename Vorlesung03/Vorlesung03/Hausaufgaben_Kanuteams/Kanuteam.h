#pragma once
#include "IdAndName.h"
#include <vector>

class Boat;
class Person;

//Vielleicht noch static vector mit allen Teams

class Kanuteam :
	public IdAndName
{
public:
	Kanuteam(std::string name, Boat* boat = nullptr);
	~Kanuteam() override;
	void printInfos()  const override;
	//void setMembers(std::vector<Person*>);
	void addElement(Person* person); //mit alias?
	void addElement(Boat* boat);
	void removeElement(Person* person);	
	void removeElement(Boat* boat);

	void setBoat_noTest(Boat* boat);
	void addMember_noTest(Person* person);
	bool is_moreMembersPossible() const;
	bool is_boatSet() const;

protected:
	Boat* m_boat;
	std::vector<Person*> m_members;

private:
	static const int max_Members;
};

