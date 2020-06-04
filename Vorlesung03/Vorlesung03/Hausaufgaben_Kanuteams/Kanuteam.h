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
	Kanuteam(std::string name, Boat* boat = nullptr);	//wei�t Name zu, Kanuteam, falls vorhanden
	~Kanuteam() override;	//entfernt sich auch aus Klassen die es referenzieren (Boat, Person)
	void printInfos()  const override;	//gibt alle Infos aus
	void addElement(Person* person);	//f�gt Person zu sich und sich selber zu Person hinzu (falls m�glich)
	void addElement(Boat* boat);	//f�gt Boot zu sich und sich selber zu Boot hinzu (falls m�glich)
	void removeElement(Person* person);	//entfernt Person
	void removeElement(Boat* boat);	//entfernt Boot

	void setBoat_noTest(Boat* boat);	//f�gt nur Boot hinzu
	void addMember_noTest(Person* person);	//f�gt nur Person hinzu
	bool is_moreMembersPossible() const;	//�berpr�ft ob noch Personen hinzugef�gt werden k�nnen
	bool is_boatSet() const;	//�berpr�ft ob Boot gesetzt ist

protected:
	Boat* m_boat;
	std::vector<Person*> m_members;

private:
	static constexpr int max_Members = 5;
};

