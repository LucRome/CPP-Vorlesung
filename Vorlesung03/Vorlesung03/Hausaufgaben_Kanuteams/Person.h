#pragma once
#include "IdAndName.h"
#include "Kanuteam.h"

class Person :
	public IdAndName
{
public:
	Person(std::string name); //Konstruktor weißt Name zu
	~Person() override; //entfernt sich auch aus Klassen die es referenzieren (Kanuteam)
	//Pointer aus anderen Klassen auf diese Klasse müssen in Konstruktor auf nullptr gesetzt werden

	void printInfos(); //gibt alle Infos aus
	void addElement(Kanuteam* kanuteam); //fügt Kanuteam zu sich und sich selber zu Kanuteam hinzu(falls möglich)
	void removeElement(Kanuteam* kanuteam); //entfernt Kanuteam
	
	void addKanuteam_noTest(Kanuteam* kanuteam); //fügt nur Kanuteam hinzu
	bool is_moreKanuteamsPossible() const;	//Überprüft ob mehr Kanuteams hinzugefügt werden können

protected:
	std::vector<Kanuteam*> m_kanuteams;

private:
	static constexpr int max_Kanuteams = 5;
};

