#pragma once
#include "IdAndName.h"
#include "Kanuteam.h"

class Person :
	public IdAndName
{
public:
	Person(std::string name); //Konstruktor wei�t Name zu
	~Person() override; //entfernt sich auch aus Klassen die es referenzieren (Kanuteam)
	//Pointer aus anderen Klassen auf diese Klasse m�ssen in Konstruktor auf nullptr gesetzt werden

	void printInfos(); //gibt alle Infos aus
	void addElement(Kanuteam* kanuteam); //f�gt Kanuteam zu sich und sich selber zu Kanuteam hinzu(falls m�glich)
	void removeElement(Kanuteam* kanuteam); //entfernt Kanuteam
	
	void addKanuteam_noTest(Kanuteam* kanuteam); //f�gt nur Kanuteam hinzu
	bool is_moreKanuteamsPossible() const;	//�berpr�ft ob mehr Kanuteams hinzugef�gt werden k�nnen

protected:
	std::vector<Kanuteam*> m_kanuteams;

private:
	static constexpr int max_Kanuteams = 5;
};

