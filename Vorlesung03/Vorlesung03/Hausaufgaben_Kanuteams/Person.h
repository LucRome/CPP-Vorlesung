#pragma once
#include "IdAndName.h"
#include "Kanuteam.h"

class Person :
	public IdAndName
{
public:
	Person(std::string name);
	~Person() override; //Pointer aus anderen Klassen auf diese Klasse müssen in Konstruktor auf nullptr gesetzt werden

	void printInfos();
	void addElement(Kanuteam* kanuteam);
	void removeElement(Kanuteam* kanuteam);
	
	void addKanuteam_noTest(Kanuteam* kanuteam);
	bool is_moreKanuteamsPossible() const;

protected:
	std::vector<Kanuteam*> m_kanuteams;

private:
	static const int max_Kanuteams;
};

