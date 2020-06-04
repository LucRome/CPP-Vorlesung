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
	Kanuteam(std::string name, Boat* boat = nullptr);	//weißt Name zu, Kanuteam, falls vorhanden
	~Kanuteam() override;	//entfernt sich auch aus Klassen die es referenzieren (Boat, Person)
	void printInfos()  const override;	//gibt alle Infos aus
	void addElement(Person* person);	//fügt Person zu sich und sich selber zu Person hinzu (falls möglich)
	void addElement(Boat* boat);	//fügt Boot zu sich und sich selber zu Boot hinzu (falls möglich)
	void removeElement(Person* person);	//entfernt Person
	void removeElement(Boat* boat);	//entfernt Boot

	void setBoat_noTest(Boat* boat);	//fügt nur Boot hinzu
	void addMember_noTest(Person* person);	//fügt nur Person hinzu
	bool is_moreMembersPossible() const;	//Überprüft ob noch Personen hinzugefügt werden können
	bool is_boatSet() const;	//Überprüft ob Boot gesetzt ist

protected:
	Boat* m_boat;
	std::vector<Person*> m_members;

private:
	static constexpr int max_Members = 5;
};

