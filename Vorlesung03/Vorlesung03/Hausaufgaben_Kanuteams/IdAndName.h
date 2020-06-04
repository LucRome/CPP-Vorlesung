#pragma once
#include <string>

class Boat;
class Kanuteam;
class Person;


class IdAndName
{
public:
	IdAndName(std::string name);
	virtual ~IdAndName();

	int getId() const;
	std::string getName() const;

	virtual void printInfos() const;

	/*virtual void addElement(Boat* boat); //Falsche Funktionen werden durch Namehiding verborgen
	virtual void addElement(Person* person);
	virtual void addElement(Kanuteam* kanuteam);
	
	virtual void removeElement(Boat* boat);
	virtual void removeElement(Person* person);
	virtual void removeElement(Kanuteam* kanuteam);*/


protected:
	static int counter;
	const int m_id;
	const std::string m_name;
};

