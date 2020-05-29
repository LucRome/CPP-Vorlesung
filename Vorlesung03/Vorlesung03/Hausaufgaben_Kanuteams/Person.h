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
	void addKanuteam(Kanuteam* kanuteam);
	bool is_moreKanusPossible() const;

protected:
	std::vector<Kanuteam*> m_kanuteams;

private:
	static const int max_Kanuteams;
};

